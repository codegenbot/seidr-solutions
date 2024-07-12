#include <iostream>
#include <vector>
#include <string>

bool areEqual(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string>& strings, const std::string& prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

}

std::vector<std::string> issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return {};
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return {};
    }
    return a;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings(n);
    for (auto &s : strings) {
        std::cin >> s;
    }

    std::string prefix;
    std::cin >> prefix;

    if (issame(strings, filter_by_prefix(strings, prefix))) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}
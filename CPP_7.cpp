```cpp
#include <iostream>
#include <vector>
#include <string>

bool areEqual(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::set<std::string> set_strings(strings.begin(), strings.end());
    std::vector<std::string> result;
    for (const auto& s : set_strings) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> strings;
    std::string s;
    for (int i = 0; i < n; ++i) {
        getline(std::cin, s);
        
        while (s.back() == '\n') {
            s.pop_back();
        }
        
        if (i > 0) 
            std::cout << " "; 
        std::cout << s << std::endl;
    }

    std::string substring;
    getline(std::cin, substring);

    auto result1 = filter_by_substring(strings, substring);

    if (areEqual(result1, strings)) {
        for (const auto& s : strings) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "No common elements found." << std::endl;
    }

    return 0;
}
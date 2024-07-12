```cpp
#include <vector>
#include <string>
#include <initializer_list>

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[(i + 1) % a.size()]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;

}

int main() {
    std::vector<std::string> a;
    std::cout << "Enter strings (stop when empty):" << std::endl;
    std::string s;
    while (true) {
        std::cin >> s; 
        if (s.empty()) break;
        a.push_back(s);
    }

    bool same = isSame(a, a);

    std::cout << "Enter prefix:" << std::endl;
    std::string prefix;
    std::cin >> prefix;

    std::vector<std::string> result = filter_by_prefix(a, prefix);

    if (!same) 
        std::cout << "Strings are not the same." << std::endl;
    else 
        std::cout << "Strings are the same." << std::endl;

    for (const auto& s : result) {
        std::cout << s << std::endl;
    }

    return 0;
}
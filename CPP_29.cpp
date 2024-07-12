```cpp
#include <vector>
#include <string>

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
    while (std::getline(std::cin, s)) {
        if (s.empty()) break;
        a.push_back(s);
    }

    bool areStringsSame = true;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != a[(i+1)%a.size()]) {
            areStringsSame = false;
            break;
        }
    }

    std::string prefix;
    std::cout << "Enter prefix:" << std::endl;
    std::getline(std::cin, prefix);
    std::vector<std::string> result = filter_by_prefix(a, prefix);

    if (!areStringsSame) 
        std::cout << "Strings are not the same." << std::endl;
    else 
        std::cout << "Strings are the same." << std::endl;

    for (const auto& s : result) {
        std::cout << s << std::endl;
    }

    return 0;

}
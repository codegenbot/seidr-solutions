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
    std::vector<std::string> result;
    for (const auto& s : strings) {
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
    while (getline(std::cin, s)) {
        s.erase(0, s.find_first_not_of('\n')); // remove leading whitespace
        strings.push_back(s);
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
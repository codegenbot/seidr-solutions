#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    for(int i = 0; i < (s1.size() > s2.size() ? s1.size() : s2.size()); ++i) {
        if(i >= s1.size() || i >= s2.size() || s1[i] != s2[i])
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring) {
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos && issame(str, substring))
            result.push_back(str);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings(n);
    for(int i = 0; i < n; ++i) {
        std::cout << "Enter string " << (i + 1) << ": ";
        std::cin >> strings[i];
    }

    std::string sub;
    std::cout << "Enter the substring: ";
    std::cin >> sub;

    for(auto str : filter_by_substring(strings, sub))
        std::cout << str << '\n';

    return 0;
}
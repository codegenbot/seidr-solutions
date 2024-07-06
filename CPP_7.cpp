#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length())
        return false;
    
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

int main() {
    std::vector<std::string> strings;
    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::string s;
        std::cin >> s;
        strings.push_back(s);
    }
    
    std::cout << "Enter the substring to filter: ";
    std::string substring;
    std::cin >> substring;
    
    std::vector<std::string> result = filter_by_substring(strings, substring);
    
    for (const auto& str : result) {
        if (isSame(str, substring))
            std::cout << "String '" << str << "' is the same as the given substring.\n";
        else
            std::cout << "String '" << str << "' is not the same as the given substring.\n";
    }
    
    return 0;
}
#include <iostream>
#include <vector>
#include <string>

bool issame(std::string str1, std::string str2) {
    if(str1.length() != str2.length())
        return false;
    for(int i = 0; i < str1.length(); ++i)
        if(str1[i] != str2[i])
            return false;
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    vector<string> result;
    for(auto str : strings) {
        if(issame(substring, str))
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> strs = {"abc", "def", "abcd", "abcde"};
    std::string sub = "abc";
    for (const auto& str : filter_by_substring(strs, sub)) {
        std::cout << str << "\n";
    }
    return 0;
}
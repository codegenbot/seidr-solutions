#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2) {
    if(str1.length() != str2.length())
        return false;
    for(int i = 0; i < str1.length(); ++i)
        if(str1[i] != str2[i])
            return false;
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"hello", "world", "hell", "helloworld"};
    std::string substring = "ell";
    std::vector<std::string> filtered_strings = filter_by_substring(strings, substring);

    for(auto str : filtered_strings) {
        if(issame(substring, str)) {
            std::cout << str << std::endl;
        }
    }

    return 0;
}
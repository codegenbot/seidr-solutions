```
#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& str1, const std::string& str2) {
    if(str1.length() != str2.length()) return false;
    for(int i = 0; i < str1.length(); i++) {
        if(str1[i] != str2[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(isSame(str, substring))
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"hello", "world", "hell"};
    std::string substring = "ell";
    
    auto filteredStrings = filter_by_substring(strings, substring);
    
    for(auto str : filteredStrings) {
        std::cout << str << "\n";
    }
    
    return 0;
}
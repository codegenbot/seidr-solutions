```
#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& str1, const std::string& str2) {
    if(str1.length() != str2.length()) return false;
    for(int i = 0; i < str1.length(); ++i)
        if(str1[i] != str2[i]) return false;
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(isSame(substring, str.substr(0, substring.length())))
            result.push_back(str);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings(n);
    for(int i = 0; i < n; ++i) 
        std::cin >> strings[i];
    
    std::string substring;
    std::cin >> substring;
    
    std::vector<std::string> result = filter_by_substring(strings, substring);
    
    if(result.empty()) {
        std::cout << "No strings found." << std::endl;
    } else {
        for(auto str : result) 
            std::cout << str << std::endl;
    }
    
    return 0;
}
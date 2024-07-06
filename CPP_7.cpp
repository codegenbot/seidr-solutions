#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& str1, const std::string& str2) {
    return str1 == str2;
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
    int n;
    std::cin >> n;
    
    std::vector<std::string> strings(n);
    for(int i = 0; i < n; ++i) {
        std::cin >> strings[i];
    }
    
    std::string substring;
    std::cin >> substring;
    
    auto filtered_strings = filter_by_substring(strings, substring);
    
    for(const auto& str : filtered_strings)
        std::cout << str << '\n';
    
    return 0;
}
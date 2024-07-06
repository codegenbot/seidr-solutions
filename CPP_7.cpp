#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) return false;
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) return false;
    }
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
    std::vector<std::string> input_strings = {"hello", "world", "hellolol", "abc"};
    std::string substring = "ell";
    
    for (const auto& str : filter_by_substring(input_strings, substring)) {
        if (issame(str, substring)) {
            std::cout << str << std::endl;
        }
    }
    return 0;
}
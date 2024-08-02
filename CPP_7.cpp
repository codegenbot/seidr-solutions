#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(str.find(substring) != std::string::npos){
            result.push_back(str);
        }
    }
    return result;
}
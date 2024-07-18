#include <cassert>
#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2){
    return str1 == str2;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(const auto& str : strings){
        if(issame(str, substring)){
            result.push_back(str);
        }
    }
    return result;
}
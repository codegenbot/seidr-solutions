#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    return (s1.length() == s2.length()) && (std::equal(s1.begin(), s1.end(), s2.begin()));
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos && !issame(str, substring)){
            result.push_back(str);
        }
    }
    return result;
}
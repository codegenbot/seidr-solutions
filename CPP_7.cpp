#include <iostream>
#include <string>
#include <vector>
#include <cassert>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2){
    if(vec1.size() != vec2.size()) {
        return false;
    }

    for (size_t i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }

    return true;
}

std::vector<std::string> filter_by_substring(const std::vector<std::string>& strings, const std::string& substring){
    std::vector<std::string> filtered_strings;
    for (const std::string& str : strings) {
        if (str.find(substring) != std::string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}
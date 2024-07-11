#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2){
    return vec1 == vec2;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}
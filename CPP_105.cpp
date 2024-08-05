#include <map>
#include <algorithm>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::map<int, std::vector<std::string>> length_to_strings;
    for (int i : arr) {
        length_to_strings[i].push_back(std::to_string(i));
    }
    
    std::vector<std::string> result;
    for (const auto& pair : length_to_strings) {
        for (const std::string& str : pair.second) {
            result.push_back(str);
        }
    }
    
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}
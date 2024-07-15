#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string> &strings, const std::string &prefix){
    std::vector<std::string> result;
    std::copy_if(strings.begin(), strings.end(), std::back_inserter(result), [&prefix](const std::string &str){
        return str.find(prefix) == 0;
    });
    return result;
}
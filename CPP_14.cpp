#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using string = std::basic_string<char>;

std::vector<string> all_prefixes(string str){
    std::vector<string> result;
    string prefix = "";
    for (char c : str) {
        prefix += c;
        result.push_back(prefix);
    }
    return result;
}

bool issame(std::vector<string> a, std::vector<string> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
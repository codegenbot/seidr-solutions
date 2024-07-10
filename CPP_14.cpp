```cpp
#include <initializer_list>
#include <vector>
#include <string>
#include <iostream>

bool issame(std::vector<std::string> a, std::vector<std::string> secondVector) {
    if (a.size() != secondVector.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != secondVector[i]) return false;
    }
    return true;
}

std::vector<std::string> all_prefixes(const std::string& s) {
    std::vector<std::string> result;
    for (int i = 0; i <= s.size(); i++) {
        result.push_back(s.substr(0, i));
    }
    return result;
}
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <memory_resource>

std::vector<std::pmr::basic_string<char>> odd_count(std::vector<std::pmr::basic_string<char>> lst){
    std::vector<std::pmr::basic_string<char>> result;
    for (std::pmr::basic_string<char> s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(odd_count) + " in the string " + s + " of the input.");
    }
    return result;
}

bool issame(std::vector<std::pmr::basic_string<char>> a, std::vector<std::pmr::basic_string<char>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
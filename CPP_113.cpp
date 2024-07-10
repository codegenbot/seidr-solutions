#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> odd_count(std::vector<std::string> lst){
    std::vector<std::string> result;
    for (const std::string& s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back("The number of odd elements " + std::to_string(odd_count) + " in the string " + s + " of the input.");
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}
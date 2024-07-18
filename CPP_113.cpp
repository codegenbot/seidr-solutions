#include <iostream>
#include <vector>
#include <string>
#include <cassert>

namespace solution_name {
    int odd_count(const std::vector<std::string>& strings) {
        int odd_elements = 0;
        for (const std::string& str : strings) {
            for (char c : str) {
                if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
                    ++odd_elements;
                }
            }
        }
        return odd_elements;
    }

    bool issame(int actual_odd_count, const std::vector<std::string>& expected_output) {
        return actual_odd_count == expected_output.size();
    }
}

int main() {
    assert(solution_name::issame(solution_name::odd_count({"271", "137", "314"}),
                                {"the number of odd elements 2",
                                 "the number of odd elements 2",
                                 "the number of odd elements 2"}));
    return 0;
}
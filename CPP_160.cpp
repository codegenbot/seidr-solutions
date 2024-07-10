#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cmath>

int do_algebra(const std::vector<std::string>& operators, const std::vector<int>& operands) {
    int result = operands[0];
    for (size_t i = 1; i < operands.size(); ++i) {
        if (operators[i - 1] == "//") {
            result /= operands[i];
        } else if (operators[i - 1] == "*") {
            result *= operands[i];
        }
    }
    return result;
}
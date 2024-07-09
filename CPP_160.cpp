#include <iostream>
#include <vector>
#include <pair>
#include <cmath>

int do_algebra(std::vector<std::pair<char, int>> operators_and_operands) {
    if (operators_and_operands.size() == 0) {
        return 0;
    }
    
    double result = static_cast<double>(operators_and_operands[0].second);
    for (const auto& pair : operators_and_operands) {
        if (pair.first == '+') {
            result += pair.second;
        } else if (pair.first == '-') {
            result -= pair.second;
        } else if (pair.first == '*') {
            result *= pair.second;
        } else if (pair.first == '/') {
            if(pair.second != 0) {
                result /= pair.second;
            }
        } else if (pair.first == '**') {
            for(int i = 1; i < pair.second; i++) {
                result *= operators_and_operands[operators_and_operands.size()-1].second;
            }
        }
    }
    return static_cast<int>(result);
}
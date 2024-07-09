#include <vector>
#include <utility>
#include <cmath>
#include <iostream>
#include <sstream>
#include <algorithm>

struct pair {
    char first;
    int second;
};

int do_algebra(std::vector<std::string> operators_and_operands) {
    if (operators_and_operands.size() == 0) {
        return 0;
    }
    
    int result = std::stoi(operators_and_operands[0].substr(0, operators_and_operands[0].find_first_of("+-*/^")));
    for (const auto& string : operators_and_operands) {
        char op = string.substr(0, string.find_first_of("+-*/^")).at(0);
        int num = std::stoi(string.substr(string.find_first_of("+-*/^") + 1));
        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        } else if (op == '*') {
            result *= num;
        } else if (op == '/') {
            if (num != 0) {
                result /= num;
            }
        } else if (op == '^') { 
            result = std::pow(result, num);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"7+3+4"}) == 14);
    // You can add more test cases here.
    return 0;
}
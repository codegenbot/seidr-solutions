#include <sstream>
#include <vector>
#include <utility>
#include <cmath>

struct pair {
    char first;
    int second;

    pair(char x, int y) : first(x), second(y) {}
};

int do_algebra(std::vector<std::pair<char, int>> operators_and_operands) {
    if (operators_and_operands.size() == 0) {
        return 0;
    }
    
    int result = operators_and_operands[0].second;
    for (const auto& pair : operators_and_operands) {
        if (pair.first == '+') {
            result += pair.second;
        } else if (pair.first == '-') {
            result -= pair.second;
        } else if (pair.first == '*') {
            result *= pair.second;
        } else if (pair.first == '/') {
            if (pair.second != 0) {
                result /= pair.second;
            }
        } else if (pair.first == '^') { 
            result = std::pow(result, pair.second);
        }
    }
    return result;
}

int main() {
    std::string str = "++7*3+4";
    std::istringstream iss(str);

    char op = '+';
    int operand = 0; // initialize operand variable
    std::vector<std::pair<char, int>> operators_and_operands;

    while (iss >> op >> operand) {
        operators_and_operands.push_back({op, operand});
        op = '+';
        operand = 0;
    }

    int result = do_algebra(operators_and_opernds);
    return 0;
}
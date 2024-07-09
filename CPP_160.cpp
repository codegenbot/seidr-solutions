#include <sstream>
#include <string>

int do_algebra(std::string input) {
    std::stringstream ss(input);
    std::vector<std::pair<char, int>> operators_and_operands;

    char op;
    int operand;

    while (ss >> op >> operand) {
        if (op == '+' || op == '-' || op == '*' || op == '/' || op == '**') {
            operators_and_operands.push_back(std::make_pair(op, operand));
        } else {
            // Invalid input
            return -1;
        }
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
        } else if (pair.first == '**') {
            long long temp = 1; 
            for(int i=0;i<pair.second;i++){
                temp*=result;
            }
            result = temp;
        }
    }
    return result;
}
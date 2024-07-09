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
    std::string str;
    std::cout << "Enter an expression: ";
    std::getline(std::cin, str);
    
    std::vector<std::pair<char, int>> operators_and_operands;
    char op = '+';
    int operand = 0; // initialize operand variable
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^') {
            op = str[i];
            operand = 0;
            for (int j = i + 1; j < str.size(); ++j) {
                if (!std::isdigit(str[j])) {
                    break;
                }
                operand = operand * 10 + (str[j] - '0');
            }
            operators_and_operands.push_back({op, operand});
            op = '+';
            operand = 0;
        }
    }
    
    int result = do_algebra(operators_and_operands);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
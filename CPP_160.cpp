```
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
    
    std::vector<std::pair<char, int>> operators_and_operands;
    char op = '+';
    int operand = 0; // initialize operand variable
    while (std::getline(iss, str, ' ")) {
        if (!str.empty()) {
            if (op != '+') {
                pair p(op, operand); 
                operators_and_operands.push_back(p);
                op = '+';
                operand = 0;
            }
            if (str[0] == '+' || str[0] == '-' || str[0] == '*' || str[0] == '/' || str[0] == '^') {
                op = str[0];
                operand = 0;
                for (int i = 1; i < str.size(); ++i) {
                    if (!std::isdigit(str[i])) {
                        break;
                    }
                    operand = operand * 10 + (str[i] - '0');
                }
            }
        }
    }
    
    // add the last operator and operand to vector
    if (op != '+') {
        pair p(op, operand);
        operators_and_operands.push_back(p);
    }
    
    int result = do_algebra(operators_and_operands);
    return 0;
}
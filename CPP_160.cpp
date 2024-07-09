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
    int operand = 0; 
    while (iss >> token) {
        if (!token.empty()) {
            if (op != '+') {
                operators_and_operands.push_back({op, operand});
                op = '+';
                operand = 0;
            }
            if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/' || token[0] == '^') {
                op = token[0];
                if (op != '+') {
                    operand = std::stoi(token.substr(1));
                } else {
                    operand = std::stoi(token);
                }
            } else {
                operand = std::stoi(token);
                op = '+';
            }
        }
    }

    // add the last operator and operand to vector
    if (op != '+') {
        operators_and_operands.push_back({op, operand});
    }

    int result = do_algebra(operators_and_operands);
    return 0;
}
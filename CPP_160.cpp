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
    
    // Add spaces around operators and at the beginning and end of the string
    str = "(" + str + ")";
    for (char op : "+-*/^") {
        str = str.replace(str.find(op), 1, " " + op + " ");
    }
    
    std::istringstream iss(str);
    
    std::vector<std::pair<char, int>> operators_and_operands;
    std::string token;
    int operand = 0; // initialize operand variable
    char op = '+';
    while (std::getline(iss, token)) {
        if (!token.empty()) {
            // if operator is not '+' then add previous operand and operator to vector
            if (op != '+') {
                operators_and_operands.push_back({op, operand});
                op = '+';
                operand = 0;
            }
            // process the current token as operand or operator
            if (token[0] == '+') {
                op = '+';
                operand = std::stoi(token.substr(1));
            } else if (token[0] == '-') {
                op = '-';
                operand = std::stoi(token.substr(1));
            } else if (token[0] == '*') {
                op = '*';
                operand = std::stoi(token.substr(1));
            } else if (token[0] == '/') {
                op = '/';
                operand = std::stoi(token.substr(1));
            } else if (token[0] == '^') {
                op = '^';
                operand = std::stoi(token.substr(1));
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
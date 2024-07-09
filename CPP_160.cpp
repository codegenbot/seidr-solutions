```cpp
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<std::pair<char, int>> calculate() {
    std::vector<std::pair<char, int>> operators_and_operands;
    std::istringstream iss;
    std::string token;

    iss >> token;
    char op = '+';
    int operand = 0;

    while (iss >> token) {
        if (!token.empty()) {
            if (!op || token[0] != '+') {
                operators_and_operands.push_back({op, operand});
                op = token[0];
                operand = std::stoi(token.substr(1));
            } else if (token[0] == '-') {
                op = '-';
                operand = std::stoll(token.substr(1));
            } else if (token[0] == '*') {
                op = '*';
                operand = std::stoll(token.substr(1));
            } else if (token[0] == '/') {
                op = '/';
                operand = std::stoll(token.substr(1));
            } else if (token[0] == '^') {
                op = '^';
                operand = std::stoi(token.substr(1));
            }
        }
    }

    // add the last operator and operand to vector
    operators_and_operands.push_back({op, operand});

    return operators_and_operands;
}

int main() {
    std::vector<std::pair<char, int>> result = calculate();
    
    for (const auto& operation : result) {
        if (operation.first == '+') {
            std::cout << "Addition: " << operation.second << std::endl;
        } else if (operation.first == '-') {
            std::cout << "Subtraction: " << operation.second << std::endl;
        } else if (operation.first == '*') {
            std::cout << "Multiplication: " << operation.second << std::endl;
        } else if (operation.first == '/') {
            std::cout << "Division: " << operation.second << std::endl;
        } else if (operation.first == '^') {
            std::cout << "Exponentiation: " << operation.second << std::endl;
        }
    }

    return 0;
}
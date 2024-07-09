#include <vector>
#include <utility>

int do_algebra(char* operators) {
    if (operators == NULL) {
        return 0;
    }
    
    int result = 0;
    char* end = operators;
    std::vector<std::pair<char, int>> operators_and_operands;

    while (end != NULL) {
        if (*end == '+') {
            end++;
            int operand = 0;
            while (*end >= '0' && *end <= '9') {
                operand = operand * 10 + (*end - '0');
                end++;
            }
            operators_and_operands.push_back(std::make_pair('+', operand));
        } else if (*end == '-') {
            end++;
            int operand = 0;
            while (*end >= '0' && *end <= '9') {
                operand = operand * 10 + (*end - '0');
                end++;
            }
            operators_and_operands.push_back(std::make_pair('-', operand));
        } else if (*end == '*') {
            end++;
            int operand = 0;
            while (*end >= '0' && *end <= '9') {
                operand = operand * 10 + (*end - '0');
                end++;
            }
            operators_and_operands.push_back(std::make_pair('*', operand));
        } else if (*end == '/') {
            end++;
            int operand = 0;
            while (*end >= '0' && *end <= '9') {
                operand = operand * 10 + (*end - '0');
                end++;
            }
            operators_and_operands.push_back(std::make_pair('/', operand));
        } else if (*end == '**') {
            end++;
            int operand = 0;
            while (*end >= '0' && *end <= '9') {
                operand = operand * 10 + (*end - '0');
                end++;
            }
            operators_and_operands.push_back(std::make_pair('**', operand));
        } else if (*end < '0' || *end > '9') {
            if (*end == '\0') break;
            char op = *end;
            end++;
            int operand = 0;
            while (*end >= '0' && *end <= '9') {
                operand = operand * 10 + (*end - '0');
                end++;
            }
            operators_and_operands.push_back(std::make_pair(op, operand));
        } else {
            break;
        }
    }

    int final_result = 0;
    for (const auto& pair : operators_and_operands) {
        if (pair.first == '+') {
            final_result += pair.second;
        } else if (pair.first == '-') {
            final_result -= pair.second;
        } else if (pair.first == '*') {
            final_result *= pair.second;
        } else if (pair.first == '/') {
            if (pair.second != 0) {
                final_result /= pair.second;
            }
        } else if (pair.first == '**') {
            long long temp = 1; 
            for(int i=0;i<pair.second;i++){
                temp*=final_result;
            }
            final_result = temp;
        }
    }
    return final_result;
}
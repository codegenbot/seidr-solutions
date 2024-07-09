#include <sstream>
#include <string>

int do_algebra(std::string input) {
    std::stringstream ss(input);
    char ops;
    int operand;

    std::vector<std::pair<char, int>> operators_and_operands;

    while (ss >> ops >> operand) {
        operators_and_operands.push_back({ops, operand});
    }

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
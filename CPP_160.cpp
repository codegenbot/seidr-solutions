#include <vector>
#include <string>
#include <utility>
#include <cmath>

int do_algebra(std::vector<std::string> operators_and_operands) {
    if (operators_and_operands.size() == 0) {
        return 0;
    }
    
    int result = std::stoi(operators_and_operands[0].substr(0, operators_and_operands[0].find(' ')).c_str());
    for (const auto& s : operators_and_operands) {
        char op = s.substr(s.find(' ') + 1, s.length() - s.find(' ') - 1)[0];
        int operand = std::stoi(s.substr(0, s.find(' ')).c_str());
        
        if (op == '+') {
            result += operand;
        } else if (op == '-') {
            result -= operand;
        } else if (op == '*') {
            result *= operand;
        } else if (op == '/') {
            if (operand != 0) {
                result /= operand;
            }
        } else if (op == '^') { 
            result = std::pow(result, operand);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"7 + 3", " * 4"})) == 14);
    // You can add more test cases here.
    return 0;
}
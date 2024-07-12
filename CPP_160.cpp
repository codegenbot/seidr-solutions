#include <vector>
#include <string>

int main() {
    int result = 0;
    std::vector<std::string> operators;
    std::vector<int> operands;

    // get input from user
    int n;
    std::cout << "Enter the number of operations: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::string op;
        int operand;
        std::cout << "Enter operator (+, -, *, //, **): ";
        std::cin >> op;
        std::cout << "Enter operand: ";
        std::cin >> operand;
        
        operators.push_back(op);
        operands.push_back(operand);
    }

    result = operands[0];
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i + 1];
        } else if (operators[i] == "-") {
            result -= operands[i + 1];
        } else if (operators[i] == "*") {
            result *= operands[i + 1];
        } else if (operators[i] == "//") {
            result = result / operands[i + 1];
        } else if (operators[i] == "**") {
            result = pow(result, operands[i + 1]);
        }
    }

    std::cout << "Result: " << result << std::endl;
    
    return 0;
}
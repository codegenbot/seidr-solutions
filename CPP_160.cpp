#include <vector>

int do_algebra(std::vector<std::string> operators, std::vector<int> operands) {
    int result = operands[0];

    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i + 1];
        }
        else if (operators[i] == "-") {
            result -= operands[i + 1];
        }
        else if (operators[i] == "*") {
            result *= operands[i + 1];
        }
        else if (operators[i] == "//") {
            result /= operands[i + 1];
        }
        else if (operators[i] == "**") {
            result = pow(result, operands[i + 1]);
        }
    }

    return result;
}

int main() {
    std::vector<std::string> operators = {"+", "-", "*", "//", "**"};
    std::vector<int> operands = {1, 2, 3};

    int result = do_algebra(operators, operands);

    return 0;
}
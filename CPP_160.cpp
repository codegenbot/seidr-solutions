#include <vector>
#include <cmath>

int main() {
    int doAlgebra(std::vector<std::string> operators, std::vector<int> operands) {
        int result = 0;
        for (int i = 0; i < operators.size(); i++) {
            if (operators[i] == "+") {
                result += operands[i];
            } else if (operators[i] == "-") {
                result -= operands[i];
            } else if (operators[i] == "*") {
                int temp = operands[i];
                for (int j = i + 1; j < operators.size(); j++) {
                    if (operators[j] == "*") {
                        temp *= operands[j];
                    } else if (operators[j] == "+") {
                        result += temp;
                        break;
                    }
                }
            } else if (operators[i] == "//") {
                int temp = operands[i];
                for (int j = i + 1; j < operators.size(); j++) {
                    if (operators[j] == "//") {
                        temp /= operands[j];
                    } else if (operators[j] == "+") {
                        result += temp;
                        break;
                    }
                }
            } else if (operators[i] == "**") {
                int temp = pow(operands[i], 1);
                for (int j = i + 1; j < operators.size(); j++) {
                    if (operators[j] == "**") {
                        temp = pow(temp, operands[j]);
                    } else if (operators[j] == "+") {
                        result += temp;
                        break;
                    }
                }
            }
        }
        return result;
    }
}
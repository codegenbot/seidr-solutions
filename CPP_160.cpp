#include <iostream>
#include <vector>
#include <string>

int do_algebra(std::vector<std::string> operator_, std::vector<int> operand_) {
    int result = 0;
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand_[i];
        } else if (operator_[i] == "-") {
            result -= operand_[i];
        } else if (operator_[i] == "*") {
            int temp = 1;
            for (int j = 0; j <= i; j++) {
                temp *= operand_[j];
            }
            result += temp;
        } else if (operator_[i] == "/" || operator_[i] == "//" || operator_[i] == "**") {
            int temp = 0;
            switch (operator_[i].c_str()[0]) {
                case '/':
                    temp = operand_[i - 1] / operand_[i];
                    break;
                case '*':
                    for (int j = 0; j < operand_[i]; j++) {
                        temp *= operand_[0];
                    }
                    result += temp;
                    break;
                case 'S':
                    if (operator_[i].size() == 2) {
                        int a = operand_[0], b = operand_[1];
                        temp = 1;
                        for (int j = 0; j < b; j++) {
                            temp *= a;
                        }
                    } else {
                        int a = operand_[0], b = operand_[i + 1];
                        temp = 1;
                        for (int j = 0; j < b; j++) {
                            temp *= a;
                        }
                    }
                    break;
                default:
                    break;
            }
            result += temp;
        }
    }
    return result;
}
#include <vector>
using namespace std;

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operator_.size(); i++) {
        if (operator_[i] == "+") {
            result += operand[i];
        } else if (operator_[i] == "-") {
            result -= operand[i];
        } else if (operator_[i] == "*") {
            int temp = 1;
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "*") {
                    temp *= operand[j];
                } else if (operator_[j] == "+") {
                    result += temp * operand[j];
                    break;
                }
            }
        } else if (operator_[i] == "//") {
            int temp = operand[i+1];
            for (int j = i + 1; j < operator_.size(); j++) {
                if (operator_[j] == "+") {
                    result += temp / operand[j];
                } else if (operator_[j] == "-") {
                    result -= temp / operand[j];
                }
            }
        } else if (operator_[i] == "**") {
            int temp = 1;
            for (int j = i; j < operator_.size(); j++) {
                if (operator_[j] == "*") {
                    temp *= pow(operand[j], 1.0);
                } else if (operator_[j] == "+") {
                    result += pow(temp, operand[j]);
                    break;
                }
            }
        }
    }
    return result;
}
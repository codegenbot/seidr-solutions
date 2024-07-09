```cpp
#include <vector>
#include <cmath>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = operand[0];
    for (int i = 1; i <= operator_.size(); i++) {
        if (operator_[i-1] == "+") {
            result += operand[i];
        } else if (operator_[i-1] == "-") {
            result -= operand[i];
        } else if (operator_[i-1] == "*") {
            result *= operand[i];
        } else if (operator_[i-1] == "//" || operator_[i-1] == "**") {
            if (i == operator_.size()) {
                return -1;
            }
            int op = operand[i];
            if (operator_[i-1] == "//") {
                result = result / op;
            } else if (operator_[i-1] == "**") {
                result = pow(result, op);
            }
        }
    }
    return result;
}
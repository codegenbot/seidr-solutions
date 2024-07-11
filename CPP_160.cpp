```cpp
#include <vector>
#include <cmath>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    for (int i = 1; i < operands.size(); i++) {
        if (*operators.begin() == "+") {
            result += operands[i];
        } else if (*operators.begin() == "-") {
            result -= operands[i];
        } else if (*operators.begin() == "*") {
            result *= operands[i];
        } else if (*operators.begin() == "//") {
            if (operands[i] != 0) {
                result = result / operands[i];
            } else {
                return 0;
            }
        } else if (*operators.begin() == "**") {
            result = pow(result, operands[i]);
        }
    }
    return result;
}

int main() {
    vector<string> operators = {"*", "+"};
    vector<int> operands = {2, 3, 4};
    cout << do_algebra(operators, operands) << endl;
    return 0;
}
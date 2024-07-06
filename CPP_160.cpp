```cpp
#include <vector>
#include <cmath>

int do_alpha(vector<string> operators, vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i + 1];
        } else if (operators[i] == "-") {
            result -= operands[i + 1];
        } else if (operators[i] == "*") {
            result *= operands[i + 1];
        } else if (operators[i] == "//") {
            result = result / static_cast<int>(operands[i + 1]);
        } else if (operators[i] == "**") {
            result = pow(result, static_cast<double>(operands[i + 1]));
        }
    }
    return result;
}

int main() {
    vector<string> operators = {"//", "*"};
    vector<int> operands = {7, 3, 4};
    cout << do_alpha(operators, operands) << endl;
    return 0;
}
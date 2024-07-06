```cpp
#include <vector>
#include <cmath>
#include <initializer_list>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = operands[0];
    for (unsigned long i = 1; i <= operators.size(); i++) {
        if (operators[i - 1] == "+") {
            result += operands[i];
        } else if (operators[i - 1] == "-") {
            result -= operands[i];
        } else if (operators[i - 1] == "*") {
            result *= operands[i];
        } else if (operators[i - 1] == "//") {
            result = result / operands[i];
        } else if (operators[i - 1] == "**") {
            result = pow(result, operands[i]);
        }
    }
    return result;
}

int main() {
    int result = do_algebra({"//", "*"}, {7, 3, 4});
    return 0;
}
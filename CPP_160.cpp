```cpp
#include <vector>
#include <cmath>

int do_algebra(vector<string> operations, vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < operations.size(); i++) {
        if (operations[i] == "+") {
            result += operands[i + 1];
        } else if (operations[i] == "-") {
            result -= operands[i + 1];
        } else if (operations[i] == "*") {
            result *= operands[i + 1];
        } else if (operations[i] == "//") {
            result = result / operands[i + 1];
        } else if (operations[i] == "**") {
            result = pow(result, operands[i + 1]);
        }
    }
    return result;
}

int main() {
    vector<string> operations = {"//", "*"};
    vector<int> operands = {7, 3, 4};
    int result = do_algebra(operations, operands);
    return 0;
}
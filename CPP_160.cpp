#include <vector>
#include <string>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i <= operators.size(); i++) {
        if (operators[i-1] == "+") {
            result += operands[i];
        } else if (operators[i-1] == "-") {
            result -= operands[i];
        } else if (operators[i-1] == "*") {
            result *= operands[i];
        } else if (operators[i-1] == "//") {
            result = result / operands[i];
        } else if (operators[i-1] == "**") {
            result = pow(result, operands[i]);
        }
    }
    return result;
}

int main() {
    assert(do_algebra({"/", "*"}, {7, 3, 4}) == 8);
    // Your code to test the function goes here
}
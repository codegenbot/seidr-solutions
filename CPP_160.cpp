#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int do_algebra(vector<string> operators, vector<int> operands){
    int result = operands[0]; // Initialize the result with the first operand

    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i + 1]; // Add the next operand
        }
        else if (operators[i] == "-") {
            result -= operands[i + 1]; // Subtract the next operand
        }
        else if (operators[i] == "*") {
            result *= operands[i + 1]; // Multiply by the next operand
        }
        else if (operators[i] == "//") {
            result /= operands[i + 1]; // Floor divide by the next operand
        }
        else if (operators[i] == "**") {
            result = pow(result, operands[i + 1]); // Raise the result to the power of the next operand
        }
    }

    return result;
}

int main() {
    vector<string> operators = {"+", "-", "*", "//", "**"};
    vector<int> operands = {5, 3, 2, 4, 2};

    int result = do_algebra(operators, operands);

    cout << result << endl;

    return 0;
}
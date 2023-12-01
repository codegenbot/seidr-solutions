#include <iostream>
#include <vector>
#include <string>
using namespace std;

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = operand[0]; // Initialize the result with the first operand

    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i + 1]; // Add the next operand to the result
        } else if (operato[i] == "-") {
            result -= operand[i + 1]; // Subtract the next operand from the result
        } else if (operato[i] == "*") {
            result *= operand[i + 1]; // Multiply the result by the next operand
        } else if (operato[i] == "//") {
            result /= operand[i + 1]; // Perform floor division with the next operand
        } else if (operato[i] == "**") {
            result = pow(result, operand[i + 1]); // Perform exponentiation with the next operand
        }
    }

    return result;
}

int main() {
    vector<string> operato{"+", "*", "-"};
    vector<int> operand{2, 3, 4, 5};

    int result = do_algebra(operato, operand);
    cout << "Result: " << result << endl;

    return 0;
}
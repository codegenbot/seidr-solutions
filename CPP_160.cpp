#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = operands[0]; // Initialize the result with the first operand

    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i+1]; // Perform addition
        } else if (operators[i] == "-") {
            result -= operands[i+1]; // Perform subtraction
        } else if (operators[i] == "*") {
            result *= operands[i+1]; // Perform multiplication
        } else if (operators[i] == "//") {
            result /= operands[i+1]; // Perform floor division
        } else if (operators[i] == "**") {
            result = pow(result, operands[i+1]); // Perform exponentiation
        }
    }

    return result;
}

int main() {
    // Test the function
    assert (do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    
    return 0;
}
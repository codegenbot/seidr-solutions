#include <iostream>
#include <vector>
#include <string>

using namespace std;

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = operand[0]; // Initialize the result with the first operand
    
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i + 1]; // Addition
        } else if (operato[i] == "-") {
            result -= operand[i + 1]; // Subtraction
        } else if (operato[i] == "*") {
            result *= operand[i + 1]; // Multiplication
        } else if (operato[i] == "//") {
            result /= operand[i + 1]; // Floor division
        } else if (operato[i] == "**") {
            result = pow(result, operand[i + 1]); // Exponentiation
        }
    }
    
    return result;
}
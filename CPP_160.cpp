int do_algebra(vector<string> operator, vector<int> operand) {
    int result = operand[0]; // Initialize the result with the first operand

    for (int i = 0; i < operator.size(); i++) {
        if (operator[i] == "+") {
            result += operand[i + 1]; // Add the next operand
        } else if (operator[i] == "-") {
            result -= operand[i + 1]; // Subtract the next operand
        } else if (operator[i] == "*") {
            result *= operand[i + 1]; // Multiply by the next operand
        } else if (operator[i] == "//") {
            result /= operand[i + 1]; // Perform floor division with the next operand
        } else if (operator[i] == "**") {
            result = pow(result, operand[i + 1]); // Perform exponentiation with the next operand
        }
    }

    return result;
}
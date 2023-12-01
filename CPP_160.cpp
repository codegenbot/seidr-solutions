int do_algebra(vector<string> operato, vector<int> operand) {
    int result = operand[0]; // Initialize the result with the first operand

    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i+1]; // Perform addition
        } else if (operato[i] == "-") {
            result -= operand[i+1]; // Perform subtraction
        } else if (operato[i] == "*") {
            result *= operand[i+1]; // Perform multiplication
        } else if (operato[i] == "//") {
            result /= operand[i+1]; // Perform floor division
        } else if (operato[i] == "**") {
            result = pow(result, operand[i+1]); // Perform exponentiation
        }
    }

    return result;
}
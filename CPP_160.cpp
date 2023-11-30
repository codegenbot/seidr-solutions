int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0]; // Initialize the result with the first operand
    
    // Loop through the operator vector
    for (int i = 0; i < operato.size(); i++) {
        // Apply the corresponding operator to the result and the next operand
        if (operato[i] == "+") {
            result += operand[i+1];
        } else if (operato[i] == "-") {
            result -= operand[i+1];
        } else if (operato[i] == "*") {
            result *= operand[i+1];
        } else if (operato[i] == "//") {
            result /= operand[i+1];
        } else if (operato[i] == "**") {
            result = pow(result, operand[i+1]);
        }
    }
    
    return result;
}
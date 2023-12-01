int do_algebra(vector<string> operatoRs, vector<int> operanDs) {
    int result = operanDs[0]; // Initialize the result with the first operand

    for (int i = 0; i < operatoRs.size(); i++) {
        if (operatoRs[i] == "+") {
            result += operanDs[i+1]; // Perform addition
        } else if (operatoRs[i] == "-") {
            result -= operanDs[i+1]; // Perform subtraction
        } else if (operatoRs[i] == "*") {
            result *= operanDs[i+1]; // Perform multiplication
        } else if (operatoRs[i] == "//") {
            result /= operanDs[i+1]; // Perform floor division
        } else if (operatoRs[i] == "**") {
            result = pow(result, operanDs[i+1]); // Perform exponentiation
        }
    }

    return result;
}
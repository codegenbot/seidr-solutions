int do_algebra(vector<string> op, vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < op.size(); i++) {
        if (op[i] == "+") {
            result += operands[i + 1];
        } else if (op[i] == "-") {
            result -= operands[i + 1];
        } else if (op[i] == "*") {
            result *= operands[i + 1];
        } else if (op[i] == "/") {
            if(operands[i+1] != 0)
                result /= operands[i + 1];
            else
                return -1;
        } else if (op[i] == "**") {
            result = pow(result, operands[i + 1]);
        }
    }
    return result;
}
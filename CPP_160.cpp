int do_algebra(vector<string> op_vector, vector<int> operand_vector) {
    int result = operand_vector[0];
    for (int i = 0; i < op_vector.size(); ++i) {
        string op = op_vector[i];
        int operand = operand_vector[i + 1];

        if (op == "+") {
            result += operand;
        } else if (op == "-") {
            result -= operand;
        } else if (op == "*") {
            result *= operand;
        } else if (op == "//") {
            result /= operand;
        } else if (op == "**") {
            result = pow(result, operand);
        }
    }
    return result;
}
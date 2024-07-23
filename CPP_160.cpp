int do_algebra(std::vector<std::string> operations, std::vector<int> operands) {
    int result = operands[0];
    for (int i = 1; i < operations.size(); i++) {
        if (operations[i-1] == "/") {
            if (operands[i] == 0)
                return 0;
            result /= operands[i];
        } else if (operations[i-1] == "*") {
            result *= operands[i];
        } else if (operations[i-1] == "+") {
            result += operands[i];
        } else if (operations[i-1] == "-") {
            result -= operands[i];
        }
    }
    return result;
}
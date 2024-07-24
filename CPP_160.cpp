for (int i = 1; i < operators.size(); i++) {
    string op = operators[i];
    if (op == "+") {
        result += operands[i];
    } else if (op == "-") {
        result -= operands[i];
    } else if (op == "*") {
        result *= operands[i];
    } else if (op == "//") {
        result = result / operands[i];
    } else if (op == "**") {
        result = pow(result, operands[i]);
    }
}
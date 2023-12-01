int do_algebra(vector<string> operato, vector<int> operands){
    int result = operands[0];

    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operands[i + 1];
        }
        else if (operato[i] == "-") {
            result -= operands[i + 1];
        }
        else if (operato[i] == "*") {
            result *= operands[i + 1];
        }
        else if (operato[i] == "/") {
            result /= operands[i + 1];
        }
        else if (operato[i] == "**") {
            result = pow(result, operands[i + 1]);
        }
    }

    return result;
}
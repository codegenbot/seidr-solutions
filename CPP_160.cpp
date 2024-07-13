int do_algebra(vector<string> operator_, vector<int> operands) {
    int result = 0;
    int current_operand = operands[0];
    string op = "";
    
    for (int i = 0; i < operator_.size(); i++) {
        op = operator_[i];
        
        if (op == "+") {
            result += current_operand;
        } else if (op == "-") {
            result -= current_operand;
        } else if (op == "*") {
            result *= current_operand;
        } else if (op == "//") {
            result /= current_operand;
        } else if (op == "**") {
            result = pow(result, current_operand);
        }
        
        if (i < operator_.size() - 1) {
            current_operand = operands[i + 1];
        }
    }
    
    return result;
}
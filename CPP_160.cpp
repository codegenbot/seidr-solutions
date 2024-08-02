int do_algebra(vector<string> operator_, vector<int> operand) {
    if (operator_.size() != operand.size() - 1) {
        return -1; // invalid input
    }
    
    int result = operand[0];
    for (int i = 0; i < operator_.size(); i++) {
        string op = operator_[i];
        int a = result;
        int b = operand[i + 1];
        
        if (op == "+") {
            result = a + b;
        } else if (op == "-") {
            result = a - b;
        } else if (op == "*") {
            result = a * b;
        } else if (op == "//") {
            result = a / b; // integer division
        } else if (op == "**") {
            result = pow(a, b);
        }
    }
    
    return result;
}
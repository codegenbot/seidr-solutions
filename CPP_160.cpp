int do_algebra(vector<string> operato, vector<int> operand) {
    int res = 0;
    int op1 = operand[0];
    string op = "";
    
    for(int i = 0; i < operato.size(); i++) {
        if(operato[i] == "+") {
            res += op1;
            op1 = operand[i+1];
        } else if(operato[i] == "-") {
            res -= op1;
            op1 = operand[i+1];
        } else if(operato[i] == "*") {
            res *= op1;
            op1 = operand[i+1];
        } else if(operato[i] == "//") {
            res /= op1;
            op1 = operand[i+1];
        } else if(operato[i] == "**") {
            res = pow(res, op1);
            op1 = operand[i+1];
        }
    }
    
    return res + op1;
}
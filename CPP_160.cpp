int do_algebra(vector<string> ops, vector<int>& operands) {
    for(int i=0; i<ops.size();i++){
        if(ops[i] == "//"){
            int div = operands[1]/operands[0];
            operands.clear();
            operands.push_back(div);
            operands.push_back(1);
        } else if (ops[i] == "*") {
            int mul = operands[0]*operands[1];
            operands.clear();
            operands.push_back(mul);
            operands.push_back(1);
        }
    }
    return *max_element(operands.begin(), operands.end());
}
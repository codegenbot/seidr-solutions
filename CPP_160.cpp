long long do_algebra(vector<string> ops, vector<long long> operands) {
    long long result = operands[0];
    for(int i = 0; i < ops.size(); i++) {
        if(ops[i] == "+") {
            result += operands[i+1];
        } else if(ops[i] == "-") {
            result -= operands[i+1];
        } else if(ops[i] == "*") {
            result *= operands[i+1];
        } else if(ops[i] == "//") {
            result = result / operands[i+1];
        } else if(ops[i] == "**") {
            result = pow(result, (double)operands[i+1]);
        }
    }
    return result;
}
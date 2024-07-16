int do_algebra(vector<string> op, vector<int> operand){
    int result = operand[0];
    for (int i = 0; i < op.size(); i++){
        if (op[i] == "+"){
            result += operand[i + 1];
        } else if (op[i] == "-"){
            result -= operand[i + 1];
        } else if (op[i] == "*"){
            result *= operand[i + 1];
        } else if (op[i] == "//"){
            result /= operand[i + 1];
        } else if (op[i] == "**"){
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}
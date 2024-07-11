int do_algebra(vector<string> operate, vector<int> operand){
    int result = operand[0];
    for(int i = 0; i < operate.size(); ++i){
        if(operate[i] == "+"){
            result += operand[i+1];
        } else if(operate[i] == "-"){
            result -= operand[i+1];
        } else if(operate[i] == "*"){
            result *= operand[i+1];
        } else if(operate[i] == "//"){
            result /= operand[i+1];
        } else if(operate[i] == "**"){
            result = pow(result, operand[i+1]);
        }
    }
    return result;
}
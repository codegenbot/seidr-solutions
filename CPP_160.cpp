int do_algebra(vector<string> operato, vector<int> operand){
    int result = 0;
    int num1 = operand[0];
    for(int i=0; i<operato.size(); i++){
        if(operato[i] == "+"){
            result += num1 + operand[i+1];
        } else if(operato[i] == "-"){
            result -= num1 - operand[i+1];
        } else if(operato[i] == "*"){
            result *= num1 * operand[i+1];
        } else if(operato[i] == "//" || operato[i] == "**"){
            if(operato[i] == "//") {
                result = num1 / (int)round((double)operand[i+1]);
            } else {
                result = pow(num1, operand[i+1]);
            }
        }
        num1 = operand[i+1];
    }
    return result;
}
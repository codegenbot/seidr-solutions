int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    int temp = operand[0];
    
    for(int i = 1; i < operato.size() + 1; i++) {
        if(operato[i-1] == "+") {
            result += temp;
            temp = operand[i];
        } else if(operato[i-1] == "-") {
            result -= temp;
            temp = operand[i];
        } else if(operato[i-1] == "*") {
            result *= temp;
            temp = operand[i];
        } else if(operato[i-1] == "//") {
            result /= temp;
            temp = operand[i];
        } else if(operato[i-1] == "**") {
            result = pow(result, temp);
            temp = 0; // reset temp
        }
    }
    
    return result;
}
int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0]; // Initialize result with the first operand

    for(int i=1; i<operand.size(); i++){
        // Apply the corresponding operation based on the operator
        if(operato[i-1] == "+")
            result += operand[i];
        else if(operato[i-1] == "-")
            result -= operand[i];
        else if(operato[i-1] == "*")
            result *= operand[i];
        else if(operato[i-1] == "//")
            result /= operand[i];
        else if(operato[i-1] == "**")
            result = pow(result, operand[i]);
    }

    return result;
}
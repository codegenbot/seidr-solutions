int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0]; // initialize result with first operand
    
    for(int i = 0; i < operato.size(); i++){
        if(operato[i] == "+"){
            result += operand[i+1]; // add next operand
        }
        else if(operato[i] == "-"){
            result -= operand[i+1]; // subtract next operand
        }
        else if(operato[i] == "*"){
            result *= operand[i+1]; // multiply by next operand
        }
        else if(operato[i] == "//"){
            result /= operand[i+1]; // floor divide by next operand
        }
        else if(operato[i] == "**"){
            result = pow(result, operand[i+1]); // raise to the power of next operand
        }
    }
    
    return result;
}
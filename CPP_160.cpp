int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0]; // initialize the result with the first operand
    
    for(int i = 0; i < operato.size(); i++){
        if(operato[i] == "+"){
            result += operand[i + 1]; // add the next operand to the result
        }
        else if(operato[i] == "-"){
            result -= operand[i + 1]; // subtract the next operand from the result
        }
        else if(operato[i] == "*"){
            result *= operand[i + 1]; // multiply the result by the next operand
        }
        else if(operato[i] == "//"){
            result /= operand[i + 1]; // perform floor division with the next operand
        }
        else if(operato[i] == "**"){
            result = pow(result, operand[i + 1]); // perform exponentiation with the next operand
        }
    }
    
    return result; // return the final result
}
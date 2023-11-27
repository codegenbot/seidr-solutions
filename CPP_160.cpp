int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0]; // initialize result with first operand

    for(int i = 0; i < operato.size(); i++){
        string operation = operato[i];
        int value = operand[i+1];

        if(operation == "+"){
            result += value;
        }
        else if(operation == "-"){
            result -= value;
        }
        else if(operation == "*"){
            result *= value;
        }
        else if(operation == "//"){
            result /= value;
        }
        else if(operation == "**"){
            result = pow(result, value);
        }
    }

    return result;
}
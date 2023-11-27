int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0];
    int i = 0;
    int j = 1;

    while(i < operato.size() && j < operand.size()){
        if(operato[i] == "+"){
            result = result + operand[j];
        }
        else if(operato[i] == "-"){
            result = result - operand[j];
        }
        else if(operato[i] == "*"){
            result = result * operand[j];
        }
        else if(operato[i] == "//"){
            result = result / operand[j];
        }
        else if(operato[i] == "**"){
            result = pow(result, operand[j]);
        }

        i++;
        j++;
    }

    return result;
}
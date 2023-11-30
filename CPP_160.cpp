int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0];
    int i = 0;
    
    for(auto op : operato){
        if(op == "+"){
            result += operand[i+1];
        }else if(op == "-"){
            result -= operand[i+1];
        }else if(op == "*"){
            result *= operand[i+1];
        }else if(op == "//"){
            result /= operand[i+1];
        }else if(op == "**"){
            result = pow(result, operand[i+1]);
        }
        i++;
    }
    
    return result;
}
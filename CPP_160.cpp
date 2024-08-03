int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression = "";
    
    for(int i=0; i<operator_.size(); i++) {
        if(i==0) {
            expression += to_string(operand[i]);
        } else {
            expression += " " + operator_[i] + " ";
            expression += to_string(operand[i]);
        }
    }
    
    int temp = 0;
    for(int i=0; i<expression.length(); i++) {
        if(expression[i]>='0' && expression[i]<='9') {
            temp = temp*10 + (expression[i]-'0');
        } else {
            if(temp!=0) {
                result += temp;
                temp = 0;
            }
            if(expression[i]==' ') {
                continue;
            }
            switch(expression[i]) {
                case '+':
                    result+=operand[operator_.size()];
                    break;
                case '-':
                    result -= operand[operator_.size()];
                    break;
                case '*':
                    result *= operand[operator_.size()];
                    break;
                case '/':
                    result /= operand[operator_.size()];
                    break;
                default:
                    if(expression[i]=='^') {
                        result = pow(result, operand[operator_.size()]);
                    }
            }
        }
    }
    
    return result;
}
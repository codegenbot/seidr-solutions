int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression = "";
    
    for(int i = 0; i < operator_.size(); i++) {
        if(i == 0)
            expression += to_string(operand[i]);
        else if(i == operator_.size() - 1)
            expression += operator_[i] + to_string(operand[i+1]);
        else
            expression += " " + operator_[i] + " ";
    }
    
    int temp = eval(expression);
    return temp;
}

int eval(string s) {
    int result = 0;
    string num = "";
    for(int i = 0; i < s.length(); i++) {
        if(isdigit(s[i])) {
            num += s[i];
        } else {
            if(!num.empty()) {
                if(num == "1") result++;
                else if(num == "2") result *= 2;
                else if(num == "3") result *= 3;
                else if(num == "4") result *= 4;
                else if(num == "5") result *= 5;
                else result = pow(result, stoi(num));
                num.clear();
            }
            if(s[i] != ' ') {
                if(s[i] == '+') result++;
                else if(s[i] == '-') result--;
                else if(s[i] == '*') result *= 2;
                else if(s[i] == '/') result /= 2;
                else if(s[i] == '**') result = pow(result, 2);
            }
        }
    }
    if(!num.empty()) {
        if(num == "1") result++;
        else if(num == "2") result *= 2;
        else if(num == "3") result *= 3;
        else if(num == "4") result *= 4;
        else if(num == "5") result *= 5;
        else result = pow(result, stoi(num));
    }
    
    return result;
}
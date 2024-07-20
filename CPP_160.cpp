int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression = "";
    
    for(int i = 0; i < operator_.size(); i++) {
        if(i == 0) {
            expression += to_string(operand[i]);
        } else {
            expression += " ";
            expression += operator_[i];
            expression += " ";
            expression += to_string(operand[i]);
        }
    }
    
    for(int i = 1; i < operand.size(); i++) {
        result = eval(expression.c_str());
    }
    
    return result;
}

int eval(char* expression) {
    int result = 0;
    char *p, *str = (char*)expression;
    while ((p = strsep(&str, " ")) != NULL) {
        if(strcmp(p, "+") == 0) {
            result += atoi(strsep(&str, " ") + 1);
        } else if(strcmp(p, "-") == 0) {
            result -= atoi(strsep(&str, " ") + 1);
        } else if(strcmp(p, "*") == 0) {
            int temp = result;
            result = temp * atoi(strsep(&str, " ") + 1);
        } else if(strcmp(p, "/") == 0) {
            result /= atoi(strsep(&str, " ") + 1);
        } else if(strcmp(p, "**") == 0) {
            int temp = result;
            result = pow(temp, atoi(strsep(&str, " ") + 1));
        }
    }
    
    return result;
}
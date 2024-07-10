int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        if (i == 0)
            expression += to_string(operand[i]);
        else {
            expression += " ";
            expression += operator_[i];
            expression += " ";
            expression += to_string(operand[i]);
        }
    }

    int result = eval(expression.c_str());
    return result;
}

int eval(char* s) {
    char temp[1000];
    sprintf(temp, "%d", atoi(s));
    return atoi(temp);
}
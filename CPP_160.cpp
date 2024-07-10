int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    expression += to_string(operand.back());
    
    int result = eval(expression.c_str());
    
    return result;
}

long long eval(const char* pexpr) {
    long long v = strtoll(pexpr, NULL, 10);
    return v;
}
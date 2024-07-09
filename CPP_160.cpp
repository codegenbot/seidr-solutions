int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        expression += to_string(operand[i]);
        expression += operator_[i];
        i++; // Increment i here as well
    }
    expression += to_string(operand[operator_.size()]);

    long long result = eval(expression);

    return result;
}

long long pow(long long base, int exponent) {
    if(exponent == 0)
        return 1;
    else if(exponent > 0)
        return base * pow(base, exponent - 1);
    else
        return 1.0 / pow(base, -exponent);
}
```
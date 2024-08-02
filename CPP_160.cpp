#include <iostream>
#include <vector>
#include <string>

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        if (i > 0) {
            expression += " ";
        }
        expression += to_string(operand[i]);
        expression += operator_[i];
    }
    expression += to_string(operand.back());
    
    int temp = eval(expression);
    return temp;
}

int eval(string s) {
    int result = 0;
    int sign = 1;
    int num = 0;
    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else if (isalpha(c)) {
            if (c == '+') {
                result += sign * num;
                num = 0;
                sign = 1;
            } else if (c == '-') {
                result += sign * num;
                num = 0;
                sign = -1;
            }
        }
    }
    return result + sign * num;
}

int main() {
    // test cases
    vector<string> operator_;
    vector<int> operand;

    // add your test cases here

    return 0;
}
#include <iostream>
#include <vector>
#include <string>

int do_algebra(std::vector<std::string> operator_, std::vector<int> operand) {
    int result = 0;
    std::string expression = "";
    for (int i = 0; i < operator_.size(); i++) {
        if (i > 0) {
            expression += " ";
        }
        expression += std::to_string(operand[i]);
        expression += operator_[i];
    }
    expression += std::to_string(operand.back());
    
    int temp = eval(expression);
    return temp;
}

int eval(std::string s) {
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
    // test your code here
    std::vector<std::string> operator_;
    std::vector<int> operand;

    // add your test cases here

    return 0;
}
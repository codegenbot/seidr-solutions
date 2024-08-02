```cpp
#include <string>
#include <vector>
using namespace std;

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression;

    for (int i = 0; i < operator_.size(); i++) {
        if (i == 0) {
            for (int j = 0; j < operand.size() - 1; j++)
                expression += to_string(operand[j]);
            expression += " ";
        }
        expression += operator_[i];
    }

    for (int i = operand.size() - 1; i >= 1; i--) {
        if (expression.back() == ' ')
            expression.pop_back();
    }

    int temp = eval(expression);
    return temp;
}

long long eval(const string& s) {
    long long res = 0;
    long long num = 0;
    char sign = '+';
    for (char c = s.begin(); c != s.end() && c != '+'; ++c) {
        if (isdigit(*c)) {
            num = num * 10 + (*c - '0');
        } else {
            if (sign == '+')res += num;
            else res -= num;
            sign = *c;
            num = 0;
        }
    }
    return res;
}
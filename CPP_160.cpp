#include <vector>
#include <string>
#include <limits>
#include <cstring>
#include <cstdlib>
#include <cmath>

long long eval(const char *p) {
    long long y = 0;
    return eval(p, y);
}

long long eval(const char *p, long long y) {
    while (*p) {
        if (isdigit(*p)) {
            p++;
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            y = x;
        } else if (*p == ' ') {
            p++;
            continue;
        } else if (*p == '+') {
            p++;
            if (*p == 'y') {
                y++;
                p += 2;
                continue;
            }
            p++;
            continue;
        } else if (*p == '-') {
            p++;
            if (*p == 'y') {
                y--;
                p += 2;
                continue;
            }
            p++;
            continue;
        } else if (*p == '*') {
            p++;
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            y *= x;
        } else if (*p == '/') {
            p++;
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            if (x != 0)
                y /= x;
            else
                return std::numeric_limits<long long>::max();
        } else if (*p == '^') {
            p++;
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            y = pow(y, x);
        }
    }
    return y;
}

int do_algebra(vector<string> operator_, vector<int> operand) {
    int result = 0;
    string expression = "";
    
    for (int i = 0; i < operator_.size(); i++) {
        if (i == 0)
            expression += to_string(operand[i]);
        else if (i == operator_.size() - 1)
            expression += operator_[i] + to_string(operand[i]);
        else
            expression += " " + operator_[i] + " " + to_string(operand[i]);
    }
    
    int temp = 0;
    for (int i = 0; i < operand.size(); i++) {
        if (expression.find(to_string(operand[i])) != string::npos) {
            temp = operand[i];
            break;
        }
    }
    
    result = eval(expression.c_str());
    
    return result;
}
#include <vector>
#include <string>
#include <cctype>
#include <cstdlib>  // for atoi
#include <cmath>    // for pow
#include <cstring>  // for strlen
#include <limits>

long long eval(const char *p, long long y) {
    while (*p) {
        if (isdigit(*p)) {
            p += 1;
            continue;
        }
        if (*p == ' ') {
            p += 1;
            continue;
        }
        if (*p == '+') {
            p = p + 1;
            if (*p == 'y') {
                y++;
                p = p + 2;
                continue;
            }
            p = p + 1;
            continue;
        }
        if (*p == '-') {
            p = p + 1;
            if (*p == 'y') {
                y--;
                p = p + 2;
                continue;
            }
            p = p + 1;
            continue;
        }
        if (*p == '*') {
            p = p + 1;
            while (isdigit(*p)) {
                p++;
            }
            int x = atoi(p - 1);
            y *= x;
            p = p + (int)strlen(p);
            continue;
        }
        if (*p == '/') {
            p = p + 1;
            while (isdigit(*p)) {
                p++;
            }
            int x = atoi(p - 1);
            if (x != 0)
                y /= x;
            else
                return LLONG_MAX;
            p = p + (int)strlen(p);
            continue;
        }
        if (*p == '^') {
            p = p + 1;
            while (isdigit(*p)) {
                p++;
            }
            int x = atoi(p - 1);
            y = pow(y, x);
            p = p + (int)strlen(p);
            continue;
        }
    }
    return y;
}

long long eval(const char *p) {
    return eval(p, 0);
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
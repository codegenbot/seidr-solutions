#include <vector>
#include <string>
#include <limits>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

long long eval(const char *p) {
    return eval(p, 0);
}

long long eval(const char *p, long long y) {
    while (*p) {
        if (isdigit(*p)) {
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            if (*p == 'y') {
                y += x;
                p++;
                continue;
            }
            y = x;
            p++;
            continue;
        }
        if (*p == ' ') {
            p++;
            continue;
        }
        if (*p == '+') {
            p++;
            if (*p == 'y') {
                y++;
                p += 2;
                continue;
            }
            p++;
            continue;
        }
        if (*p == '-') {
            p++;
            if (*p == 'y') {
                y--;
                p += 2;
                continue;
            }
            p++;
            continue;
        }
        if (*p == '*') {
            p++;
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            y *= x;
            p++;
            continue;
        }
        if (*p == '/') {
            p++;
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            if (x != 0)
                y /= x;
            else
                return numeric_limits<long long>::max();
            p++;
            continue;
        }
        if (*p == '^') {
            p++;
            int x = 0;
            while (isdigit(*p)) {
                x = x * 10 + (*p - '0');
                p++;
            }
            y = pow(y, x);
            p++;
            continue;
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
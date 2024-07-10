```cpp
#include <vector>
#include <string>
#include <limits>
#include <cmath>
#include <cctype>

using namespace std;

long long eval(const char *p) {
    return eval(p, 0);
}

long long eval(const char *p, long long y) {
    while (*p) {
        if (isdigit(*p)) {
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
            int x = 1;
            while (isdigit(*p)) {
                x = x * (int)(*p - '0');
                p++;
            }
            y *= x;
            p += (int)strlen(p);
            continue;
        }
        if (*p == '/') {
            int x = 1;
            while (isdigit(*p)) {
                x = x * (int)(*p - '0');
                p++;
            }
            if (x != 0)
                y /= x;
            else
                return numeric_limits<long long>::max();
            p += (int)strlen(p);
            continue;
        }
        if (*p == '^') {
            int x = 1;
            while (isdigit(*p)) {
                x = x * (int)(*p - '0');
                p++;
            }
            y = pow(y, x);
            p += (int)strlen(p);
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
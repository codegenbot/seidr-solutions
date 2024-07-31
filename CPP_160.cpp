#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand) {
    string expression = "";
    for (int i = 0; i < operato.size(); i++) {
        expression += to_string(operand[i]);
        expression += operato[i];
    }
    expression += to_string(operand[operato.size()]);
    
    int result = eval(expression.c_str());
    return result;
}

long long eval(const char *p) {
    long long x = 0, y = 0;
    while (*p) {
        if (isdigit(*p)) {
            y = y * 10 + *p - '0';
        } else if (*p == '.') {
            int p2 = p + 1;
            while (*p2 >= '0' && *p2 <= '9') p2++;
            x = x * 10 + *p2 - '0';
            p = p2;
        } else if (*p == '(') {
            long long v = eval(p + 1);
            p = strchr(p, ')');
            assert(p != NULL);
            y = (y == 0 ? v : y);
        } else {
            int op = *p - '0';
            x = applyOp(x, y, op);
            y = 0;
        }
    }
    return x;
}

long long applyOp(long long x, long long y, int op) {
    switch (op) {
        case 1: // +
            return x + y;
        case 2: // -
            return x - y;
        case 3: // *
            return x * y;
        case 4: // /
            if (y == 0) throw runtime_error("Divide by zero");
            return x / y;
        case 5: // **
            return pow(x, y);
    }
}
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
        if (i > 0)
            expression += " ";
        expression += to_string(operand[i - 1]);
        expression += operato[i];
    }
    expression += to_string(operand.back());
    
    int result = eval(expression.c_str());
    
    return result;
}

int eval(char* s) {
    int n = strlen(s);
    char* p = new char[n + 1];
    strcpy(p, s);

    int result = 0;

    while (*p) {
        if (isdigit(*p)) {
            int i = 0;
            while (isdigit(p[i])) i++;
            int num = atoi(substr(p, 0, i));
            p += i;
            if (*p == '(' || *p == ')') {
                result = eval(subexpr(p));
                break;
            }
            if (*p == '+') {
                result += num;
                p++;
            } else if (*p == '-') {
                result -= num;
                p++;
            } else if (*p == '*') {
                result *= num;
                p++;
            } else if (*p == '/') {
                result /= num;
                p++;
            }
        } else {
            p++;
        }
    }

    delete[] p;

    return result;
}

char* substr(char* s, int start, int end) {
    char* t = new char[end - start + 1];
    strncpy(t, &s[start], end - start);
    t[end - start] = '\0';
    return t;
}

int subexpr(char* p) {
    int i = 0;
    while (p[i] && p[i] != '(') i++;
    i++;
    int j = 0;
    while (p[i] && p[i] != ')') j++, i++;
    i++;

    char* t = new char[j + 1];
    strncpy(t, &p[i], j);
    t[j] = '\0';

    delete[] p;

    return eval(t);
}
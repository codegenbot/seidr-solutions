#include <string>
#include <vector>

using namespace std;

int do_algebra(vector<string> operator_, vector<int> operand) {
    string expression;
    for (int i = 0; i < operator_.size(); ++i) {
        expression += to_string(operand[i]);
        expression += " ";
        expression += operator_[i];
        if (i != operator_.size() - 1) {
            expression += " ";
        }
    }
    expression += to_string(operand.back());
    
    int result = eval(expression.c_str());
    
    return result;
}

int eval(char* s) {
    char *p = NULL;
    long l = strtoll(s, &p, 10);
    if (*p == '\0') {
        return l;
    }
    else {
        // This is a recursive function
        int i = 0;
        while (i < strlen(s) && isspace((unsigned char)s[i])) i++;
        if (s[i] == 'E' || s[i] == 'e') {
            // Exponentiation
            int base = eval(p);
            p += strlen("e");
            long exponent = strtoll(p, &p, 10);
            return pow(base, exponent);
        }
        else if (s[i] == '*') {
            // Multiplication
            int a = eval(p);
            p++;
            i--;
            while (*++p && isspace((unsigned char)*p));
            long b = strtoll(p, &p, 10);
            return a * b;
        }
        else if (s[i] == '+') {
            // Addition
            int a = eval(p);
            p += strlen("+");
            i--;
            while (*++p && isspace((unsigned char)*p));
            long b = strtoll(p, &p, 10);
            return a + b;
        }
        else if (s[i] == '-') {
            // Subtraction
            int a = eval(p);
            p += strlen("-");
            i--;
            while (*++p && isspace((unsigned char)*p));
            long b = strtoll(p, &p, 10);
            return a - b;
        }
        else if (s[i] == '/') {
            // Division
            int a = eval(p);
            p += strlen("/");
            i--;
            while (*++p && isspace((unsigned char)*p));
            long b = strtoll(p, &p, 10);
            return a / b;
        }
        else if (s[i] == '//') {
            // Floor division
            int a = eval(p);
            p += strlen("//");
            i--;
            while (*++p && isspace((unsigned char)*p));
            long b = strtoll(p, &p, 10);
            return a / b;
        }
    }
    return l;
}
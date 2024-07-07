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
        expression += " ";
        expression += operato[i];
        expression += " ";
    }
    expression += to_string(operand[operato.size()]);
    
    int result = eval(expression.c_str());
    return result;
}

int eval(char* str) {
    double x = strtod(str, NULL);
    return (int)x;
}
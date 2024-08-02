#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand){
    string expression = "";
    for(int i = 0; i < operato.size(); i++){
        expression += to_string(operand[i]);
        expression += operato[i];
    }
    expression += to_string(operand[operato.size()]);
    
    int result = eval(expression.c_str());
    return result;
}

int eval(char* str){
    int result = 0;
    char *p = strtok(str, " +*-//**");
    while(p != NULL){
        if(*p == '+') result += atoi(p+1);
        else if(*p == '-') result -= atoi(p+1);
        else if(*p == '*') result *= atoi(p+1);
        else if(*p == '/') result /= atoi(p+1);
        else if(*p[0] == 'd' && *p[1] == '/') result = result / atoi(p+2);
        else if(strncmp(p, "**", 2) == 0) result = pow(result, atoi(p+2));
        p = strtok(NULL, " +*-//**");
    }
    return result;
}
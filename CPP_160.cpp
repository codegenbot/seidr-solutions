#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    string temp = "";
    for(int i=0; i<operato.size(); i++) {
        if(i==0) {
            temp += to_string(operand[i]);
        } else {
            temp += " " + operato[i] + " ";
            temp += to_string(operand[i+1]);
        }
    }

    // Convert the string expression into a mathematical expression
    int finalResult = eval(temp.c_str());
    
    return finalResult;
}

// Helper function to evaluate the mathematical expression
int eval(char* exp) {
    int result = 0;
    int n = strlen(exp);
    for(int i=0; i<n; i++) {
        if(isdigit(exp[i])) {
            int num = 0;
            while(i<n && isdigit(exp[i])) {
                num = num * 10 + (exp[i] - '0');
                i++;
            }
            result += num;
        } else if(exp[i] == '+') {
            result++;
        } else if(exp[i] == '-') {
            result--;
        } else if(exp[i] == '*') {
            result *= exp[i+1] - '0';
            i++;
        } else if(exp[i] == '/') {
            result /= exp[i+1] - '0';
            i++;
        }
    }
    return result;
}
#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand) {
    string expression = "";
    for(int i=0; i<operato.size(); i++) {
        if(i==0)
            expression += to_string(operand[i]);
        else {
            expression += " ";
            expression += operato[i];
            expression += " ";
            expression += to_string(operand[i]);
        }
    }

    int result = 0;
    for(int i=1; i<operand.size(); i++) {
        if(operato[0] == "+")
            result += operand[i];
        else if(operato[0] == "-")
            result -= operand[i];
        else if(operato[0] == "*")
            result *= operand[i];
        else if(operato[0] == "//")
            result = result / (operand[i]);
        else
            result = pow(result, operand[i]);
    }

    return result;
}
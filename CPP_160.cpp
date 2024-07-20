#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand){
    int res = operand[0];
    for(int i = 0; i < operato.size(); i++){
        if(operato[i] == "+") res += operand[i+1];
        else if(operato[i] == "-") res -= operand[i+1];
        else if(operato[i] == "*") res *= operand[i+1];
        else if(operato[i] == "//") res /= operand[i+1];
        else if(operato[i] == "**") res = pow(res, operand[i+1]);
    }
    return res;
}
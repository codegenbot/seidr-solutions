#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand){
    int result = 0;
    int i = 0;
    while(i < (operand.size() - 1)){
        if(operato[i] == "+")result += operand[i+1];
        else if(operato[i] == "-")result -= operand[i+1];
        else if(operato[i] == "*")result *= operand[i+1];
        else if(operato[i] == "//")result /= (int)round((double)operand[i+1]);
        else if(operato[i] == "**")result = pow(result, operand[i+1]);
        i++;
    }
    return result;
}
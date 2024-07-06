#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = operand[0];
    for(int i = 0; i < operato.size(); i++) {
        if(operato[i] == "+") {
            result += operand[i+1];
        } else if(operato[i] == "-") {
            result -= operand[i+1];
        } else if(operato[i] == "*") {
            int temp = 1;
            for(int j = i+1; j <= i+1; j++) {
                temp *= operand[j];
            }
            result *= temp;
        } else if(operato[i] == "//") {
            int temp = operand[i+1] / (int)ceil((double)operand[i]/operand[i+1]);
            result /= temp;
        } else if(operato[i] == "**") {
            int temp = 1;
            for(int j = i+1; j <= i+1; j++) {
                temp = pow(operand[j],temp);
            }
            result = (int)pow(result,temp);
        }
    }
    return result;
}
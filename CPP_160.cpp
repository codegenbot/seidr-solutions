#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand){
    int result = 0;
    for(int i=0; i<operato.size();i++){
        if(operato[i] == "+") {
            result += operand[i];
        } else if (operato[i] == "-") {
            result -= operand[i];
        } else if (operato[i] == "*") {
            int temp = 1;
            for(int j=i;j<operand.size();j++){
                temp *= operand[j];
            }
            result += temp;
            i = operand.size() - 1; // skip the rest of the loop
        } else if (operato[i] == "//") {
            int temp = operand[i+1];
            for(int j=i+1;j<operand.size();j++){
                temp /= operand[j];
            }
            result += temp;
            i = operand.size() - 2; // skip the rest of the loop
        } else if (operato[i] == "**") {
            int temp = 1;
            for(int j=i+1;j<operand.size();j++){
                temp *= pow(operand[j], 1);
            }
            result += temp;
            i = operand.size() - 2; // skip the rest of the loop
        }
    }
    return result;
}
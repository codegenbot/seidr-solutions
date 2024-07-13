#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0];
    for(int i=0; i<operato.size(); i++){
        if(operato[i] == "+"){
            result += operand[i+1];
        }
        else if(operato[i] == "-"){
            result -= operand[i+1];
        }
        else if(operato[i] == "*"){
            result *= operand[i+1];
        }
        else if(operato[i] == "//" || operato[i] == "**"){
            int temp = result;
            if(operato[i] == "//"){
                result = temp / operand[i+1];
            }
            else{
                result = pow(temp, operand[i+1]);
            }
        }
    }
    return result;
}
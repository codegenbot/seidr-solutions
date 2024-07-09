#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand){
    int result = 0;
    int temp = operand[0];
    for(int i=1; i<operand.size();i++){
        if(operato[i-1] == "+") {
            result += temp;
        } else if(operato[i-1] == "-"){
            result -= temp;
        } else if(operato[i-1] == "*"){
            result *= temp;
        } else if(operato[i-1] == "//" || operato[i-1] == "floor_division") {
            result = result / temp;
        } else if(operato[i-1] == "**" || operato[i-1] == "exponentiation") {
            result = pow(result, temp);
        }
        temp = operand[i];
    }
    return result;
}
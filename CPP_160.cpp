#include <vector>
#include <string>
int do_algebra(vector<string> operations, vector<int> operand){
    int result = 0;
    int num1 = operand[0];
    for(int i=0; i<operations.size(); i++){
        if(operations[i] == "+"){
            result += num1 + operand[i+1];
        } else if(operations[i] == "-"){
            result -= num1 - operand[i+1];
        } else if(operations[i] == "*"){
            result *= num1 * operand[i+1];
        } else if(operations[i] == "//" || operations[i] == "**"){
            if(operations[i] == "//") {
                result = num1 / (int)round((double)operand[i+1]);
            } else {
                result = pow(num1, operand[i+1]);
            }
        }
        num1 = operand[i+1];
    }
    return result;
}
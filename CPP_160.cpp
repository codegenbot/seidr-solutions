#include <vector>
#include <string>

int do_algebra(vector<string> operation, vector<int> operand){
    int result = operand[0];
    for(int i = 0; i < operation.size(); i++){
        if(operation[i] == "+"){
            result += operand[i+1];
        }
        else if(operation[i] == "-"){
            result -= operand[i+1];
        }
        else if(operation[i] == "*"){
            result *= operand[i+1];
        }
        else if(operation[i] == "//"){
            result /= operand[i+1];
        }
        else if(operation[i] == "**"){
            result = pow(result, operand[i+1]);
        }
    }
    return result;
}
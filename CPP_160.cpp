#include <vector>
#include <cassert>

using namespace std;

int do_algebra(const vector<string>& operato, const vector<int>& operand){
    int result = operand[0];

    for(int i = 0; i < operato.size(); i++){
        if(operato[i] == "+"){
            result += operand[i+1];
        }
        else if(operato[i] == "-"){
            result -= operand[i+1];
        }
        else if(operato[i] == "*"){
            result *= operand[i+1];
        }
        else if(operato[i] == "//"){
            result /= operand[i+1];
        }
        else if(operato[i] == "**"){
            result = pow(result, operand[i+1]);
        }
    }

    return result;
}
```cpp
#include <vector>
#include <cmath>
using namespace std;

int do_algebra(vector<int> operands, vector<string> operato){
    int result = 0;
    int num1 = operands[0];
    for(int i=0; i<operato.size(); i++){
        if(operato[i] == "+"){
            result += num1 + operands[i+1];
        } else if(operato[i] == "-"){
            result -= num1 - operands[i+1];
        } else if(operato[i] == "*"){
            result *= num1 * operands[i+1];
        } else if(operato[i] == "//" || operato[i] == "**"){
            if(operato[i] == "//") {
                result = num1 / (int)round((double)operands[i+1]);
            } else {
                result = pow(num1, operands[i+1]);
            }
        }
        num1 = operands[i+1];
    }
    return result;
}
```cpp
#include <vector>
#include <cmath>
using namespace std;

int do_algebra(vector<int> operands, vector<string> operato){
    int result = operands[0];
    for(int i=0; i<operato.size(); i++){
        if(operato[i] == "+"){
            result += operands[i+1];
        } else if(operato[i] == "-"){
            result -= operands[i+1];
        } else if(operato[i] == "*"){
            result *= operands[i+1];
        } else if(operato[i] == "//" || operato[i] == "**"){
            if(operato[i] == "//") {
                result = result / (int)round((double)operands[i+1]);
            } else {
                result = pow(result, operands[i+1]);
            }
        }
    }
    return result;
}
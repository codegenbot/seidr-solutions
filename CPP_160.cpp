```cpp
#include <vector>
#include <cmath>
using namespace std;

int do_algebra(vector<int> operato, vector<string> operands){
    int result = 0;
    int num1 = stoi(operands[0]);
    for(int i=0; i<operato.size(); i++){
        if(operato[i] == 1){
            result += num1 + stoi(operands[i+1]);
        } else if(operato[i] == -1){
            result -= num1 - stoi(operands[i+1]);
        } else if(operato[i] == 0){
            result *= num1 * stoi(operands[i+1]);
        } else {
            if (operato[i] == 2) {
                result = num1 / (int)round((double)stoi(operands[i+1]));
            } else {
                result = pow(num1, stoi(operands[i+1]));
            }
        }
        num1 = stoi(operands[i+1]);
    }
    return result;
}
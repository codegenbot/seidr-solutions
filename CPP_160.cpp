#include <vector>
#include <cmath>
#include <cassert>
using namespace std;

long long do_algebra(vector<string> operators, vector<int> operands){
    long long result = operands[0];
    for(int i = 0; i < operators.size(); i++){
        if(operators[i] == "+"){
            result += operands[i+1];
        }
        else if(operators[i] == "-"){
            result -= operands[i+1];
        }
        else if(operators[i] == "*"){
            result *= operands[i+1];
        }
        else if(operators[i] == "//"){
            result /= operands[i+1];
        }
        else if(operators[i] == "**"){
            result = pow(result, operands[i+1]);
        }
    }
    return result;
}
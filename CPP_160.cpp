#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int do_algebra(const vector<string>& operators, const vector<int>& operands){
    int result = operands[0];
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
            result = static_cast<int>(pow(result, operands[i+1]));
        }
    }
    return result;
}

int main(){
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    // add more test cases if needed
    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

int do_algebra(vector<string> oper, vector<int> operand){
    int result = operand[0];
    for(int i = 0; i < oper.size(); i++){
        if(oper[i] == "+"){
            result += operand[i+1];
        }
        else if(oper[i] == "-"){
            result -= operand[i+1];
        }
        else if(oper[i] == "*"){
            result *= operand[i+1];
        }
        else if(oper[i] == "/"){
            result /= operand[i+1];
        }
        else if(oper[i] == "**"){
            result = pow(result, operand[i+1]);
        }
    }
    return result;
}

int test_main() {
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}

int main() {
    test_main();
    return 0;
}
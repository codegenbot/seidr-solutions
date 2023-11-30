#include <vector>
#include <string>
#include <cmath>

int calculateExpression(vector<string> operato, vector<int> operand){
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

int main() {
    assert (calculateExpression({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}
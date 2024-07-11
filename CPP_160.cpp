#include <vector>

int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0];
    for(int i = 0; i < operato.size(); i++){
        if(operato[i] == "+"){
            result += operand[i+1];
        } else if(operato[i] == "-"){
            result -= operand[i+1];
        } else if(operato[i] == "*"){
            result *= operand[i+1];
        } else if(operato[i] == "//"){
            result /= operand[i+1];
        } else if(operato[i] == "**"){
            result = pow(result, operand[i+1]);
        }
    }
    return result;
}

int main() {
    vector<string> operato = {"+", "*", "-"};
    vector<int> operand = {5, 3, 2, 4};
    
    //assert(do_algebra(operato, operand) == 19);
    cout << do_algebra(operato, operand);
    
    return 0;
}  
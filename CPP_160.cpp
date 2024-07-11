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

int main(){
    vector<string> operators = {"+", "-", "*", "//", "**"};
    vector<int> operands = {2, 4, 3};
    cout << do_algebra(operators, operands) << endl;

    return 0;
}
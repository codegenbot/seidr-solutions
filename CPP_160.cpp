#include <vector>

int do_algebra(std::vector<std::string> operato, std::vector<int> operand){
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
    std::vector<std::string> operation = {"+", "-", "*", "//"};
    std::vector<int> operands = {5, 3, 2, 4};
  
    std::cout << do_algebra(operation, operands) << std::endl;
  
    return 0;
}
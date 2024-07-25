```cpp
#include <vector>
#include <string>
#include <cmath>

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    int temp = 0;
    string prevOp = "+";
    
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            if (prevOp == "*")
                result += temp * operand[i];
            else if (prevOp == "/")
                result += temp / (double)operand[i];
            else
                result += operand[i];
            prevOp = "+";
            temp = 0;
        } else if (operato[i] == "-") {
            if (prevOp == "*")
                result -= temp * operand[i];
            else if (prevOp == "/")
                result -= temp / (double)operand[i];
            else
                result -= operand[i];
            prevOp = "-";
            temp = 0;
        } else if (operato[i] == "*") {
            temp *= operand[i];
            prevOp = "*";
        } else if (operato[i] == "/") {
            if(prevOp == "**")
                result /= pow(temp, (double)operand[i]);
            else
                temp /= operand[i];
            prevOp = "/";
        } else if (operato[i] == "//") {
            while(operand[i--]) 
                temp /= *(operand.begin() + i);
        } else if (operato[i] == "**") {
            temp = pow(temp, operand[i]);
            prevOp = "**";
        }
    }
    return result;
}
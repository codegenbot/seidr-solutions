#include <iostream>
#include <vector>
#include <string>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i];
        } else if (operators[i] == "-") {
            result -= operands[i];
        } else if (operators[i] == "*") {
            int temp = 1;
            for (int j = 0; j <= i; j++) {
                temp *= operands[j];
            }
            result += temp;
        } else if (operators[i] == "/") {
            if(i+1 < operators.size() && operators[i+1] == "/") {
                int temp = operands[i-1] / operands[i];
                result += temp;
            } else {
                return -1; 
            }
        } else if (operators[i] == "**") {
            int temp = 1;
            for (int j = 0; j < stoi(operators[i+1]); j++) {
                temp *= operands[0];
            }
            result += temp;
            i++;
        }
    }
    return result;
}
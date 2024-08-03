#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i];
        } else if (operato[i] == "-") {
            result -= operand[i];
        } else if (operato[i] == "*") {
            int temp = 0;
            for (int j = i; j < operand.size(); j++) {
                temp *= operand[j];
            }
            result += temp;
        } else if (operato[i] == "//") {
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            int temp = pow(operand[i], operand[i + 1]);
            result = temp;
        }
    }
    return result;
}
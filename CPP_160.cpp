#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    int temp = 1;

    for (int i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += temp * operand[i];
        } else if (operato[i] == "-") {
            result -= temp * operand[i];
        } else if (operato[i] == "*") {
            temp *= operand[i];
        } else if (operato[i] == "//") {
            temp = temp / operand[i];
        } else if (operato[i] == "**") {
            temp = pow(temp, operand[i]);
        }
    }

    return result;
}
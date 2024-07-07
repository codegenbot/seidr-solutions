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
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "*") {
                    temp *= operand[j];
                } else if (operato[j] == "-") {
                    temp -= operand[j];
                }
            }
            result += temp;
        } else if (operato[i] == "//") {
            int temp = operand[i] / 1;
            for (int j = i + 1; j < operato.size(); j++) {
                if (operato[j] == "//") {
                    temp /= operand[j];
                }
            }
            result += temp;
        } else if (operato[i] == "**") {
            int temp = 1;
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "**") {
                    temp *= pow(operand[j], 1.0);
                }
            }
            result += temp;
        }
    }
    return result;
}
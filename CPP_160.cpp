#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = 0;
    int i = 0;

    for (i = 0; i < operato.size(); i++) {
        if (operato[i] == "+") {
            result += operand[i];
        }
        else if (operato[i] == "-") {
            result -= operand[i];
        }
        else if (operato[i] == "*") {
            int temp = 0;
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "*") {
                    temp += operand[j] * operand[i];
                }
                else if (operato[j] == "-") {
                    temp -= operand[j] * operand[i];
                    break;
                }
            }
            result = temp;
        }
        else if (operato[i] == "///") {
            int temp = 0;
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "///") {
                    temp += operand[j] / operand[i];
                }
                else if (operato[j] == "-") {
                    temp -= operand[j] / operand[i];
                    break;
                }
            }
            result = temp;
        }
        else if (operato[i] == "**") {
            int temp = 1;
            for (int j = i; j < operato.size(); j++) {
                if (operato[j] == "**") {
                    temp *= pow(operand[j], operand[i]);
                }
                else if (operato[j] == "-") {
                    temp /= pow(operand[j], operand[i]);
                    break;
                }
            }
            result = temp;
        }
    }

    return result;
}
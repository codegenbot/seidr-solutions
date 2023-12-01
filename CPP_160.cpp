#include<stdio.h>
#include<math.h>
#include<vector>
#include<string>
using namespace std;
#include<algorithm>
#include<stdlib.h>

int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0]; // Initialize the result with the first operand

    // Iterate through the operators
    for (int i = 0; i < operato.size(); i++) {
        string op = operato[i]; // Get the operator at the current index
        int num = operand[i + 1]; // Get the operand at the next index

        // Perform the corresponding operation based on the operator
        if (op == "+") {
            result += num;
        } else if (op == "-") {
            result -= num;
        } else if (op == "*") {
            result *= num;
        } else if (op == "//") {
            result /= num;
        } else if (op == "**") {
            result = pow(result, num);
        }
    }

    return result;
}
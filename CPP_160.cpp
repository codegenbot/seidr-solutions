```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    for (int i = 0; i < operators.size(); i++) {
        if (operators[i] == "+") {
            result += operands[i];
        } else if (operators[i] == "-") {
            result -= operands[i];
        } else if (operators[i] == "*") {
            result *= operands[i];
        } else if (operators[i] == "/") {
            result /= operands[i];
        } else if (operators[i] == "**") {
            result = pow(operands[i], operands[i+1]);
        }
    }
    return result;
}
```
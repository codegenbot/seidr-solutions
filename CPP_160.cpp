```
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int do_algebra(vector<string> operator, vector<int> operand) {
    int result = 0;
    for (int i = 0; i < operator.size(); i++) {
        if (operator[i] == "+") {
            result += operand[i];
        } else if (operator[i] == "-") {
            result -= operand[i];
        } else if (operator[i] == "*") {
            result *= operand[i];
        } else if (operator[i] == "/") {
            result /= operand[i];
        } else if (operator[i] == "**") {
            result = pow(operand[i], operand[i+1]);
        }
    }
    return result;
}
```
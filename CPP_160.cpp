#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

int do_algebra(vector<string> operato, vector<int> operand){
    int result = operand[0];
    for (int i = 0; i < operato.size(); ++i) {
        if (operato[i] == "+") {
            result += operand[i + 1];
        } else if (operato[i] == "-") {
            result -= operand[i + 1];
        } else if (operato[i] == "*") {
            result *= operand[i + 1];
        } else if (operato[i] == "//") {
            result /= operand[i + 1];
        } else if (operato[i] == "**") {
            result = pow(result, operand[i + 1]);
        }
    }
    return result;
}

int main(){
    assert(do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    // Add more test cases here if needed

    return 0;
}
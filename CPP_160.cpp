#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <algorithm>

int do_algebra(vector<string> operators, vector<int> operands) {
    int result = 0;
    int temp = operands[0];
    for (int i = 1; i < operands.size(); i++) {
        if (*min_element(operators.begin(), operators.end()) == "+") {
            result += temp + operands[i];
        } else if (*min_element(operators.begin(), operators.end()) == "-") {
            result -= temp - operands[i];
        } else if (*min_element(operators.begin(), operators.end()) == "*") {
            result *= temp * operands[i];
        } else if (*min_element(operators.begin(), operators.end()) == "//") {
            result = temp / (int)floor((double)operands[i]);
        } else if (*min_element(operators.begin(), operators.end()) == "**") {
            result = pow(temp, operands[i]);
        }
        operators.erase(min_element(operators.begin(), operators.end()));
    }
    return result;
}
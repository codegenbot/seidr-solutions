#include <iostream>
#include <vector>
#include <utility>
#include <cmath>

using namespace std;

int do_algebra(vector<pair<char, char>> operators_and_operands) {
    if (operators_and_operands.size() == 0) {
        return 0;
    }
    
    int result = operators_and_operands[0].second - '0'; 
    for (const auto& pair : operators_and_operands) {
        char op = pair.first;
        int num = pair.second - '0';
        
        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        } else if (op == '*') {
            result *= num;
        } else if (op == '/') {
            if (num != 0) {
                result /= num;
            }
        } else if (op == '^') { 
            result = pow(result, num);
        }
    }
    return result;
}

int main() {
    vector<pair<char, char>> operators_and_operands = { {'+', '7'}, {'*', '3'}, {'/', '4'} };
    cout << do_algebra(operators_and_operands) << endl;
    return 0;
}
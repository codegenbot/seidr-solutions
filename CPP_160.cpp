#include <iostream>
#include <vector>
#include <string>

using namespace std;

int do_algebra(vector<string> operato, vector<int> operand) {
    int result = operand[0];
    int index = 1;
    
    for (const string& op : operato) {
        if (op == "+") {
            result += operand[index];
        } else if (op == "-") {
            result -= operand[index];
        } else if (op == "*") {
            result *= operand[index];
        } else if (op == "//") {
            result /= operand[index];
        } else if (op == "**") {
            result = pow(result, operand[index]);
        }
        
        index++;
    }
    
    return result;
}

int main() {
    vector<string> operato = {"+", "*", "-"};
    vector<int> operand = {2, 3, 4, 5};
    
    int result = do_algebra(operato, operand);
    
    cout << "Result: " << result << endl;
    
    return 0;
}
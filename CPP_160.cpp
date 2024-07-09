```cpp
#include <iostream>
#include <vector>
using namespace std;

int do_algebra(vector<string> ops, vector<int> operands) {
    int result = operands[0];
    for (int i = 0; i < ops.size(); i++) {
        if (ops[i] == "//") {
            result /= operands[i + 1];
        } else {
            result *= operands[i + 1];
        }
    }
    return result;
}

int main() {
    vector<string> ops = {"//", "*"};
    vector<int> operands = {7, 3, 4};
    int result = do_algebra(ops, operands);
    cout << "The final result is: " << result << endl;
    return 0;
}
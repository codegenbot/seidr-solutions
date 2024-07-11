```cpp
#include <iostream>
#include <sstream>
using namespace std;

int digitSum(string s) {
    int sum = 0;
    for (char c : s) {
        if (isdigit(c)) {
            sum += (c - '0');
        }
    }
    return sum;
}

int main() {
    cout << "Enter a string: ";
    string input;
    cin >> input;
    size_t pos = 0;
    while (pos < input.size() && ::isspace(input[pos])) {
        ++pos;
    }
    string newInput = input.substr(pos);
    if (!newInput.empty()) { 
        int digitPos = -1;
        for (int i = 0; i < newInput.size(); ++i) {
            if (!std::isdigit(newInput[i])) {
                digitPos = i;
                break;
            }
        }
        if (digitPos == -1) {
            int result = digitSum(newInput);
            cout << "The sum of digits is: " << result << endl;
        } else {
            int result = digitSum(newInput.substr(0, digitPos));
            cout << "The sum of digits is: " << result << endl;
        }
    } else {
        cout << "Error: Empty input." << endl;
    }
    return 0;
}
```cpp
#include <vector>
using namespace std;

int luhn(const vector<int>& digits) {
    int sum = 0;
    bool isSecond = true;
    for (int i = 0; i < digits.size(); i++) {
        if (isSecond) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                doubled -= 9;
            }
            sum += doubled;
        } else {
            sum += digits[i];
        }
        isSecond = !isSecond;
    }
    return sum;
}

int main() {
    vector<int> input; // Read your input from user
    cout << "Enter 16 credit card numbers separated by space: ";
    for (int i = 0; i < 16; i++) {
        int digit;
        cin >> digit;
        input.push_back(digit);
    }
    int result = luhn(input); 
    cout << "Result: " << result << endl; // Print the result
    return 0;
}
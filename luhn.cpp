#include <iostream>
using namespace std;

int luhn(int* digits, int n) {
    int sum = 0;
    bool isSecond = false; 
    for (auto i = n - 1; i >= 0; --i) {
        if (isSecond) { 
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else { 
            sum += digits[i];
        }
        isSecond = !isSecond; 
    }
    return sum;
}

int main() {
    int digits[] = {4,3,2,1,8,7,6,5,4,3,2,1};
    int n = sizeof(digits) / sizeof(digits[0]);
    for (auto i = n - 1; i >= 0; --i) {
        cout << std::to_string(digits[i]) << " ";
    }
    cout << luhn((int*)digits, n) << endl;
    return 0;
}
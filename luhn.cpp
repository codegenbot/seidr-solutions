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
    int n; 
    cin >> n; 
    int digits[n]; 
    for (int i=0; i<n; ++i) {
        cin >> digits[i];
    }

    int result = luhn(digits, n);
    cout << "The Luhn checksum is: " << result << endl;
    
    return 0;
}
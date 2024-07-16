#include <iostream>
using namespace std;

int luhn(int digits[16]) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        int temp = (i % 2 == 0) ? digits[i] : digits[i] * 2;
        if (temp > 9)
            sum += temp - 9;
        else
            sum += temp;
    }
    return sum;
}

int main() {
    int digits[16];
    for(int i = 0; i < 16; i++) {
        cin >> digits[i];
    }
    cout << "The Luhn check result is: " << luhn(digits);
    return 0;
}
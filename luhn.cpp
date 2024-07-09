```cpp
#include <iostream>
using namespace std;

int luhn(int* numbers) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        int digit = numbers[i];
        if (i % 2 == 0) { 
            digit *= 2;
            if (digit > 9)
                digit -= 9; 
        }
        sum += digit;
    }
    return sum;
}

int main() {
    int cardNumber[16] = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 6, 4, 3, 9, 0};
    cout << "Luhn check result: " << luhn(cardNumber) << endl;
    return 0;
}
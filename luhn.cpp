#include <iostream>
using namespace std;

int luhn(long long cardNumber) {
    int sum = 0;

    vector<int> numbers;
    while (cardNumber > 0) {
        numbers.push_back(cardNumber % 10);
        cardNumber /= 10;
    }

    for (int i = numbers.size() - 1; i >= 0; --i) {
        int digit = numbers[i];

        if (i % 2 == 1) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
    }

    return sum;
}

int main() {
    long long cardNumber = 14946721334973;  
    cout << "The Luhn checksum for this card is: " << luhn(cardNumber) << endl;
    return 0;
}
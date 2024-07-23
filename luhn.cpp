```cpp
#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    bool alt = false;
    for (int i = card.size() - 1; i >= 0; --i) {
        int digit = card[i];
        if (alt) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alt = !alt;
    }
    return sum;
}

int main() {
    vector<int> card;
    int num;
    cout << "Enter credit card number (16 digits): ";
    for(int i = 0; i < 16; ++i) {
        cin >> num;
        card.push_back(num);
    }
    cout << "Luhn's check digit is: " << luhn(card) << endl;
    return 0;
}
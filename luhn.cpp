#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for (int i = card.size() - 1; i >= 0; --i) {
        if ((card[i] * 2) > 9) {
            sum += (card[i] * 2) - 9;
        } else {
            sum += card[i] * 2;
        }
        if (i % 2 != 0) {
            sum += card[i];
        }
    }
    return sum;
}

int main() {
    vector<int> card;
    int temp;
    cout << "Enter a credit card number: ";
    for(int i = 0; i < 16; i++) {
        cin >> temp;
        card.push_back(temp);
    }
    cout << "The Luhn check value is: " << luhn(card) << endl;
    return 0;
}
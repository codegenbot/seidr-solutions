```cpp
#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for(int i = card.size() - 1; i >= 0; i--) {
        if((card[i] * 2) > 9) {
            sum += (card[i] * 2) - 9;
        } else {
            sum += card[i] * 2;
        }
        sum += card[i-1];
    }
    return sum;
}

int main() {
    vector<int> card;
    int num;
    cout << "Enter credit card number (16 digits): ";
    for(int i = 0; i < 16; i++) {
        cin >> num;
        card.push_back(num);
    }
    int result = luhn(card);
    cout << "Result: " << result << endl;
    return 0;
}
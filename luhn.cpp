#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int>& card) {
    int sum = 0;
    for (int i = 0; i < card.size(); i++) {
        int digit = card[i];
        if ((i % 2) == 1) {
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
    int n;
    cin >> n;
    vector<int> card(n);
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }
    cout << luhn(card) << endl;
    return 0;
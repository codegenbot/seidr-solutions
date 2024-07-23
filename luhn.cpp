#include <vector>
#include <iostream>

using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for(int i = 0; i < card.size(); i++) {
        if(i % 2 == 1) {
            int double_digit = card[i] * 2;
            if(double_digit > 9) double_digit -= 9;
            sum += double_digit;
        } else {
            sum += card[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> card(n);
    for(int i = 0; i < n; i++) {
        cin >> card[i];
    }
    cout << luhn(card) << endl;
    return 0;
}
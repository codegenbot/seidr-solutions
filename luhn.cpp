#include <iostream>
#include <vector>

int luhn(vector<int> card) {
    int sum = 0;
    bool isDouble = false;
    for(int i = card.size() - 1; i >= 0; i--) {
        if(isDouble) {
            int num = card[i] * 2;
            if(num > 9)
                sum += (num % 10) + 1;
            else
                sum += num;
            isDouble = false;
        } else {
            sum += card[i];
            isDouble = !isDouble;
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
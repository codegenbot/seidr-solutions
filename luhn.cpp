#include <iostream>
#include <vector>
using namespace std;

int luhnCheck(vector<int>& card) {
    int originalSum = 0;
    for (int i = 0; i < card.size(); i++) {
        originalSum += card[i];
    }

    int sum = originalSum;
    for (int i = 1; i < card.size(); i++) {
        if (i % 2 == 1) {
            int temp = card[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
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
    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }
    cout << luhnCheck(card) << endl;
    return 0;
}
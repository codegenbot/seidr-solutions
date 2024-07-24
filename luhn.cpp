#include <vector>
using namespace std;

int luhn(vector<int> card) {
    int sum = 0;
    for (int i = 0; i < card.size(); i++) {
        if ((i % 2 == 1)) { // double every other digit starting with the second digit
            card[i] *= 2;
            if (card[i] > 9) { // if any of the results are over 9, subtract 9 from them
                card[i] -= 9;
            }
        }
    }
    for (int i = 0; i < card.size(); i++) {
        sum += card[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> card(16);
    for (int i = 0; i < 16; i++) {
        cin >> card[i];
    }
    cout << luhn(card) << endl;
    return 0;
}
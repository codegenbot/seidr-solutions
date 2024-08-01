#include <vector>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if ((i % 2) == 1) {
            digits[i] *= 2;
            if (digits[i] > 9)
                digits[i] -= 9;
        }
        sum += digits[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> card_number(16);
    for (int i = 0; i < 16; ++i) {
        cin >> card_number[i];
    }
    cout << luhn(card_number) << endl;
    return 0;
}
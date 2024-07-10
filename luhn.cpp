int luhn(vector<int>& card_digits) {
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        if (i % 2 == 1) {
            int doubled = card_digits[i] * 2;
            sum += (doubled > 9) ? doubled - 9 : doubled;
        } else {
            sum += card_digits[i];
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> card_digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> card_digits[i];
    }
    cout << luhn(card_digits) << endl;
    return 0;
}
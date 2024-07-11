int luhn(int n) {
    int sum = 0;
    bool alternate = false;

    for (int i = 15; i >= 1; --i) {
        int digit = (n / pow(10, i)) % 10;
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> card;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        card.push_back(num);
    }
    cout << luhn(accumulate(card.begin(), card.end(), 0));
    return 0;
}
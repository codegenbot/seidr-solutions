int main() {
    vector<int> digits(16);
    int sum = 0;

    for (int i = 0; i < 16; i++) {
        cin >> digits[i];
    }

    for (int i = 1; i < 16; i += 2) {
        digits[i] *= 2;
        if (digits[i] > 9) {
            digits[i] -= 9;
        }
    }

    for (int i = 0; i < 16; i++) {
        sum += digits[i];
    }

    cout << sum;

    return 0;
}
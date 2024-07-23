int main() {
    vector<int> digits(16);
    for (int i = 0; i < 16; ++i) {
        cin >> digits[i];
    }

    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        if (i % 2 == 1) {
            int doubledDigit = 2 * digits[i];
            sum += (doubledDigit > 9) ? doubledDigit - 9 : doubledDigit;
        } else {
            sum += digits[i];
        }
    }

    cout << sum << endl;

    return 0;
}
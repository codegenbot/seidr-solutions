int luhn_algorithm(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        int val = digits[i];
        if (i % 2 == 1) {
            val *= 2;
            if (val > 9) val -= 9;
        }
        sum += val;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }
    cout << luhn_algorithm(digits) << endl;
    return 0;
}
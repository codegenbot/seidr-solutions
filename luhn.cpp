int main() {
    vector<int> digits(16);
    for(int i = 0; i < 16; i++) {
        cin >> digits[i];
    }

    int sum = 0;
    for(int i = 0; i < 16; i++) {
        if(i % 2 == 1) {
            int doubled = digits[i] * 2;
            if(doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }
    }

    cout << sum;

    return 0;
}
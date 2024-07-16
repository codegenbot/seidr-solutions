int luhn(int* digits, int n) {
    int sum = 0;
    for (auto i = 0; i < n; ++i) {
        if (i % 2 == 1) {
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}
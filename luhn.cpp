int verifyCreditCard(vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        int num = digits[i];
        if (i % 2 == 0) {
            num *= 2;
            if (num > 9) {
                num -= 9;
            }
        }
        sum += num;
    }
    return sum;
}
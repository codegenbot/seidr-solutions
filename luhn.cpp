int luhn(const vector<int>& input) {
    int sum = 0;
    for (int i = 0; i < input.size(); ++i) {
        int num = input[i];
        if (i % 2 != 0) {
            num *= 2;
            if (num > 9) {
                num -= 9;
            }
        }
        sum += num;
    }
    return sum;
}
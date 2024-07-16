```
int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) {
            int temp = digits[i] * 2;
            if (temp > 9)
                sum += temp / 10 + temp % 10;
            else
                sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;

}
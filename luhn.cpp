int luhn(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int temp = (i % 2 == 1) ? digits[i] * 2 : digits[i];
        if (temp > 9) {
            temp -= 9;
        }
        sum += temp;
    }
    return sum % 10; // Return the remainder of the sum divided by 10
}
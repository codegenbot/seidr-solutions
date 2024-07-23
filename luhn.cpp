int luhn(std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 0 && digits[i] * 2 > 9) || (i % 2 != 0)) {
            sum += ((i % 2 == 0) ? digits[i] : digits[i] * 2);
            if(digits[i] * 2 > 9)
                sum -= 9;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}
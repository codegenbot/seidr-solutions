int luhn(int* digits, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        if ((i % 2) == 0) {
            sum += digits[i];
        } else {
            int doubleValue = digits[i] * 2;
            if (doubleValue > 9)
                doubleValue -= 9;
            sum += doubleValue;
        }
    }
    return sum;
}
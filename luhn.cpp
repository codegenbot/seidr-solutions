int luhn(int* digits, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        if ((length - i) % 2 != 0) { 
            int doubleValue = digits[i] * 2;
            if (doubleValue > 9)
                doubleValue -= 9;
            sum += doubleValue;
        } else
            sum += digits[i];
    }
    return sum;
}
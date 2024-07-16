int luhn(int* digits, int n) {
    int sum = 0;
    bool isSecond = false; 
    for (auto i = n - 1; i >= 0; --i) {
        if (isSecond) { 
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else { 
            sum += digits[i];
        }
        isSecond = !isSecond; 
    }
    return sum;
}
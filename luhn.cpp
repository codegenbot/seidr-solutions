```
int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if (digit > 9) {
            digit -= 10;
        }
        sum += digit;
    }
    return sum % 10 == 0;
}
```
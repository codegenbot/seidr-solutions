```cpp
int luhn(const std::vector<long long>& cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.size(); i++) {
        int digit = cardNumber[i] * (i % 2 == 1 ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum % 10;
}
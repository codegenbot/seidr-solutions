```cpp
int luhn(std::vector<int> cardNumber) {
    int sum = 0;
    bool addNext = false; 
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = cardNumber[i] * (addNext ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        addNext = !addNext;
    }
    return sum % 10 == 0 ? 0 : 1; 
}
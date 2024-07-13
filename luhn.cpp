```cpp
int luhn(std::vector<int> cardNumber) {
    int sum = 0;
    bool isDoubleNext = false;
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = cardNumber[i];
        if (isDoubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        isDoubleNext = !isDoubleNext;
    }
    return sum % 10 == 0 ? 0 : 1; 
}
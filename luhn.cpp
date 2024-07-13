```cpp
int luhn(int cardNumber) {
    int sum = 0;
    int tempCardNumber = cardNumber;
    for (int i = 0; i < 16; i++) {
        int digit = tempCardNumber % 10;
        if ((i + 1) % 2 != 0) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        tempCardNumber /= 10;
    }
    return sum;
}
```cpp
int luhn(int cardNumber[]) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = 15; i >= 0; --i) {
        int digit = cardNumber[i];

        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}

int main() {
    // Example usage
    int cardNumber[] = {1, 9, 4, 6, 7, 2, 1, 4, 9, 3, 3, 0, 7, 3, 3, 4};
    int result = luhn(cardNumber);
    return 0;
}
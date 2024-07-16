```cpp
int luhn(int cardNumber) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        int temp = (i % 2 == 0) ? cardNumber % 10 : (cardNumber / 10) % 10 * 2;
        if (temp > 9)
            sum += temp - 9;
        else
            sum += temp;
        cardNumber /= 100; // move to the next digit
    }
    return sum;
}
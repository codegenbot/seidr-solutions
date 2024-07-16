```cpp
int luhn(int* digits) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if ((i + 1) % 2 == 1) {
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    int cardNumber[] = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 3, 1, 6, 4, 3, 5};
    int digits[16];
    for(int i=0; i<16; i++) { digits[i] = cardNumber[i]; }
    int result = luhn(digits);
    return 0;
}
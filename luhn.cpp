```cpp
int luhn(int cardNumber) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if ((i % 2 != 0)) {
            int temp = (cardNumber % 10) * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
            cardNumber /= 10;
        } else {
            sum += cardNumber % 10;
            cardNumber /= 10;
        }
    }
    return sum;
}

int main() {
    int cardNumber = 4532015295970004; 
    std::cout << "Luhn's checksum is: " << luhn(cardNumber) << std::endl;
    return 0;
}
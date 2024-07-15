```cpp
int luhn(int cardNumber) {
    int sum = 0;
    bool doubleNext = false;
    while(cardNumber > 0) {
        int digit = cardNumber % 10;
        if (doubleNext) {
            if(digit * 2 > 9) digit -= 9; 
            sum += digit; 
        } else {
            sum += digit; 
        }
        doubleNext = !doubleNext;
        cardNumber /= 10;
    }
    return sum;
}
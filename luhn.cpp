```cpp
int sum = 0;
bool alternate = false;
int cardNumber;

while (!(std::cin >> cardNumber) || cardNumber < 0 || cardNumber > 9) {
    std::cout << "Invalid input. Please enter a digit between 0 and 9: ";
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cin >> std::ws;
}

cardNumber *= 10; // convert to integer

while (cardNumber > 0) {
    int digit = cardNumber % 10;
    if (alternate) {
        if (digit * 2 > 9) {
            sum += (digit * 2) - 9;
        } else {
            sum += digit * 2;
        }
    } else {
        sum += digit;
    }
    alternate = !alternate;
    cardNumber /= 10;
}

return sum;
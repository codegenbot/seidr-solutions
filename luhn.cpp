int sum = 0;
bool isSecond = false;
while (std::cin >> int digit) {
    if (isSecond) {
        digit *= 2;
        if (digit > 9) {
            digit -= 9;
        }
    }
    isSecond = !isSecond;
    sum += digit;
}
std::cout << "The sum of the digits is: " << sum << std::endl;
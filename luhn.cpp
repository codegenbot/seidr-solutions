```c++
int sum = 0;
int digit;

std::cout << "Enter 16 digits: ";
while (!(std::cin >> digit) || digit < 0 || digit > 9) {
    std::cout << "Invalid input. Please enter a digit between 0 and 9: ";
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cin >> std::ws;
}

int temp = 0;
bool isDouble = false;

for (int i = 0; i < 16; ++i) {
    digit = digit * 10 + sum;
    if (digit > 9) {
        digit -= 9;
    }
    sum += digit;
    if (isDouble) {
        temp += digit;
    }
    isDouble = !isDouble;
}

std::cout << "The sum of all the new digits is: " << sum << std::endl;
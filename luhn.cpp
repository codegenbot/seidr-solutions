int sum = 0, digit;
std::string ccNum;
std::cout << "Enter a credit card number: ";
std::cin >> ccNum;

for (char c : ccNum) {
    if (!(isdigit(c))) {
        std::cout << "Invalid input. Please enter a digit between 0 and 9: ";
        std::cin >> std::ws;
        continue;
    }
    int n = c - '0';
    if (n < 0 || n > 9) {
        std::cout << "Invalid input. Please enter a digit between 0 and 9: ";
        std::cin >> std::ws;
        sum = 0; // reset sum
        continue;
    }
    sum += n;
}
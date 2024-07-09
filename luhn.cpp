int digit;
while (!(std::cin >> digit) || digit < 0 || digit > 9) {
    std::cout << "Invalid input. Please enter a digit between 0 and 9: ";
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cin >> std::ws;
}
int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int pennies = 0;

    quarters = cents / 25;
    cents %= 25;

    dimes = cents / 10;
    cents %= 10;

    nickels = cents / 5;
    cents %= 5;

    pennies = cents;

    std::cout << "Quarters: ";
    if(quarters > 1) std::cout << "s ";
    std::cout << quarters << std::endl;

    std::cout << "Dimes: ";
    if(dimes > 1) std::cout << "s ";
    std::cout << dimes << std::endl;

    std::cout << "Nickels: ";
    if(nickels > 1) std::cout << "s ";
    std::cout << nickels << std::endl;

    std::cout << "Pennies: ";
    if(pennies > 1) std::cout << "s ";
    std::cout << pennies << std::endl;
    
    return 0;
}
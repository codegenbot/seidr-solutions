int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::cout << "Quarters: " << quarters << std::endl;
    if(quarters > 0)
        std::cout << "Dimes: " << dimes + (quarters * 2) << std::endl;
    else
        std::cout << "Dimes: " << dimes << std::endl;

    if(dimes > 0 || nickels > 0)
        std::cout << "Nickles: " << nickels << std::endl;
    else
        std::cout << "Nickles: 0" << std::endl;

    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}
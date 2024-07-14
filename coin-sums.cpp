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
    std::cout << "Dimes: " << dimes << std::endl;
    if(dimes > 0)
        std::cout << "Nickles: " << nickels << std::endl;
    else
        std::cout << "Nickles: " << (nickels + pennies / 5) << std::endl;

    std::cout << "Pennies: " << pennies % 5 << std::endl;

    return 0;
}
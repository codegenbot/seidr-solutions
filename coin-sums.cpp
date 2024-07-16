int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int remaining = cents % 25;

    int dimes = remaining / 10;
    int pennies = remaining % 10;

    int nickles = dimes / 2;
    remaining = dimes % 2 * 10 + pennies;

    pennies = remaining;

    std::cout << "Quarters: " << std::to_string(quarters) << "\n";
    std::cout << "Dimes: " << std::to_string(dimes) << "\n";
    std::cout << "Nickels: " << std::to_string(nickles) << "\n";
    std::cout << "Pennies: " << std::to_string(pennies) << "\n";

    return 0;
}
int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::cout << quarters << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickles << std::endl;
    std::cout << pennies << std::endl;

    return 0;
}
int main() {
    int cents;
    std::cin >> cents;

    int quarters = 0, remainder = cents;
    while (remainder >= 25) {
        quarters++;
        remainder -= 25;
    }

    int dimes = 0, remainder2 = remainder;
    while (remainder2 >= 10) {
        dimes++;
        remainder2 -= 10;
    }

    int nickles = 0, remainder3 = remainder2;
    while (remainder3 >= 5) {
        nickles++;
        remainder3 -= 5;
    }

    int pennies = remainder3;

    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nickles << "\n";
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}
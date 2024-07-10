```c++
int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    int nickles = 0;
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    int pennies = cents;

    std::cout << quarters << " quarter(s), ";
    if (quarters > 1) std::cout << "and";
    else std::cout << " an";
    std::cout << " " << dimes << " dime(s), ";
    if (dimes > 1 || quarters > 0) std::cout << "and";
    else std::cout << " a";
    std::cout << " " << nickles << " nickel(s), and ";
    std::cout << pennies << " penny(s).\n";

    return 0;
}
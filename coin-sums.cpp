int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = (cents - (quarters * 25)) / 10; 
    cents %= 10;

    int pennies = cents; // update this line
    int nickles = 0;
    if(pennies >= 5) {
        nickles = pennies / 5;
        pennies %= 5;
    }

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}
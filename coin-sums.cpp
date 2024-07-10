int main() {
    int cents;
    std::cin >> cents;

    int quarters = 0, dimes = 0, nickles = 0, pennies = 0;
    
    // Calculate Quarters
    quarters = cents / 25;
    cents %= 25; 
   
    // Calculate remaining amount with dimes
    dimes = cents / 10;
    cents %= 10;

    // Calculate remaining amount with nickles
    nickles = cents / 5;
    cents %= 5;

    // Pennies are the remaining cents
    pennies = cents;

    std::cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << std::endl;
    if (dimes > 0) {
        std::cout << dimes << " dime" << (dimes > 1 ? "s" : "") << std::endl;
    }
    if (nickles > 0) {
        std::cout << nickles << " nickel" << (nickles > 1 ? "s" : "") << std::endl;
    }
    if (pennies > 0) {
        std::cout << pennies << " penny" << (pennies > 1 ? "s" : "") << std::endl;
    }

    return 0;
}
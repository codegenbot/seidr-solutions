Here is the modified code:

```cpp
int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int quarters = cents / 25;
    int remainder = cents % 25; 

    int dimes = remainder / 10;
    remainder %= 10; 

    int nickles = remainder / 5;
    remainder %= 5; 

    int pennies = remainder;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    int quarters = n / 25;
    n %= 25;
    int dimes = n / 10;
    n %= 10;
    int nickels = n / 5;
    n %= 5;
    int pennies = n;

    std::cout << pennies << std::endl;
    std::cout << nickels << std::endl;
    std::cout << dimes << std::endl;
    std::cout << quarters << std::endl;

    return 0;
}
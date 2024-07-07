```c++
#include <iostream>
#include <tuple>

std::tuple<int, int, int, int> coinSum(int cents) {
    int pennies = 0;
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;

    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    pennies = cents; // assign remaining cents to pennies

    return std::make_tuple(quarters, dimes, nickles, pennies);
}

int main() {
    int cents;
    std::cin >> cents;

    auto counts = coinSum(cents);
    std::cout << std::get<0>(counts) << std::endl;
    std::cout << std::get<1>(counts) << std::endl;
    std::cout << std::get<2>(counts) << std::endl;
    std::cout << std::get<3>(counts) << std::endl;

    return 0;
}
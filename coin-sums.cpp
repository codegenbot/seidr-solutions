#include <iostream>
#include <tuple>

std::tuple<int, int, int, int> coinSum(int cents) {
    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents; // just assign the remaining cents as pennies

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
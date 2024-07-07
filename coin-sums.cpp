#include <iostream>
#include <tuple>

std::tuple<int, int, int, int> coinSum(int cents) {
    int pennies = cents; // Initialize pennies with remaining cents
    int quarters = 0;
    for (; pennies >= 25; pennies -= 25) quarters++;

    int dimes = 0;
    for (; pennies >= 10; pennies -= 10) dimes++;

    int nickles = 0;
    for (; pennies >= 5; pennies -= 5) nickles++;

    int leftOverPennies = pennies; // Update remaining pennies
    return std::make_tuple(quarters, dimes, nickles, leftOverPennies);
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
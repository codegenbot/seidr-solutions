#include <iostream>
#include <tuple>

std::tuple<int, int, int, int> coinSum(int cents) {
    int pennies = cents; 
    cents %= 1;

    int quarters = 0;
    quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    dimes = cents / 10;
    cents %= 10;

    int nickles = 0;
    nickles = cents / 5;
    cents %= 5;

    return std::make_tuple(quarters, dimes, nickles, pennies);
}

int main() {
    int cents;
    cin >> cents;

    auto counts = coinSum(cents);
    cout << get<0>(counts) << endl;
    cout << get<1>(counts) << endl;
    cout << get<2>(counts) << endl;
    cout << get<3>(counts) << endl;

    return 0;
}
std::tuple<int, int, int, int> coinSum(int cents) {
    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    int dimes = 0;
    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }

    int nickles = 0;
    while (cents >= 5) {
        cents -= 5;
        nickles++;
    }

    return std::make_tuple(quarters, dimes, nickles, cents);
}
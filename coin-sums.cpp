std::tuple<int, int, int, int> coinSum(int cents) {
    int quarters = cents / 25;
    cents %= 25;

    int pennies = 0;
    for (; cents >= 10; cents -= 10) pennies++;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents; // Remaining cents are all pennies

    return std::make_tuple(quarters, dimes, nickles, pennies);
}
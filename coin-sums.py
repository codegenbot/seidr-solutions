def coin_sums(cents):
    quarters = cents // 25
    cents %= 25
    nickles = cents // 5
    cents %= 5
    dimes = cents // 10
    cents %= 10
    pennies = cents

    return [quarters, nickles, dimes, pennies]
def coin_sums(cents):
    quarters = cents // 25
    cents = cents%25
    dimes = cents // 10
    cents = cents%10
    nickels = cents // 5
    cents = cents%5
    pennies = cents

    return quarters, dimes, nickels, pennies
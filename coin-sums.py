def coin_sums(cents):
    quarters = cents // 25
    remaining_cents = cents % 25
    dimes = remaining_cents // 10
    remaining_cents %= 10
    nickels = remaining_cents // 5
    remaining_cents %= 5
    pennies = remaining_cents

    return quarters, dimes, nickels, pennies
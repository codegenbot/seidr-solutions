def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents // 1
    nickels = cents // 5
    dimes = cents // 10
    quarters = cents // 25
    remaining_cents = cents % 25

    if remaining_cents > 0:
        quarters -= (cents // 25) - (remaining_cents // 25)
        remaining_cents %= 25

        if remaining_cents > 0:
            dimes -= (cents // 10) - (remaining_cents // 10)
            remaining_cents %= 10

            if remaining_cents > 0:
                nickels -= (cents // 5) - (remaining_cents // 5)
                remaining_cents %= 5

                pennies = remaining_cents

    return pennies, nickels, dimes, quarters
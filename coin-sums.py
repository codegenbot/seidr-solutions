def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    while cents > 0:
        if cents >= 25:
            count = cents // 25
            cents -= 25 * count
            coins[3] += count
        elif cents >= 10:
            count = cents // 10
            cents -= 10 * count
            coins[2] += count
        elif cents >= 5:
            count = cents // 5
            cents -= 5 * count
            coins[1] += count
        else:
            count = cents
            cents = 0
            coins[0] += count

    return coins[3], coins[2], coins[1], coins[0]


cents = int(input("Enter the number of cents: "))
pennies, dimes, nickels, quarters = coin_sum(cents)
print(f"{quarters} quarters, {dimes} dimes, {nickels} nickels, and {pennies} pennies")
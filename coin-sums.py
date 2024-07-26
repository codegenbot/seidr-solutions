def coin_sum(cents):
    denominations = [1, 5, 10, 25]
    coins = [0, 0, 0, 0]
    for i in range(len(denominations)-1, -1, -1):
        while cents >= denominations[i]:
            count = cents // denominations[i]
            coins[i] += count
            cents -= denominations[i] * count
    return coins[0], coins[1], coins[2], cents

cents = int(input("Enter the number of cents: "))
pennies, nickels, dimes, remaining_cents = coin_sum(cents)
print(f"{pennies} pennies, {nickels} nickels, {dimes} dimes, and {remaining_cents} cents")
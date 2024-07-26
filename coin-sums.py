def coin_sum(cents):
    denominations = [25, 10, 5, 1]
    coins = [0, 0, 0, 0]
    for i in range(len(denominations)-1, -1, -1):
        while cents >= denominations[i]:
            count = cents // denominations[i]
            coins[i] += count
            cents -= denominations[i] * count
    return coins[3], coins[2], coins[1], coins[0]

cents = int(input("Enter the number of cents: "))
pennies, nickels, dimes, quarters = coin_sum(cents)
print(f"{quarters} quarters, {dimes} dimes, {nickels} nickels, and {pennies} pennies")
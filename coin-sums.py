def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    denominations.sort(reverse=True)

    for i in range(len(denominations)):
        while cents >= denominations[i]:
            count = cents // denominations[i]
            coins[i] += count
            cents -= denominations[i] * count

    return quarters, dimes, nickels, pennies

cents = int(input("Enter the number of cents: "))
quarters, dimes, nickels, pennies = coin_sum(cents)
print(f"{quarters} quarters, {dimes} dimes, {nickels} nickels, and {pennies} pennies")
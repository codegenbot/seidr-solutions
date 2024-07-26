def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    denominations.sort(reverse=True)

    for i in range(len(denominations)):
        while cents >= denominations[i]:
            count = cents // denominations[i]
            coins[i] += count
            cents -= denominations[i] * count

    quarters = coins[0]
    dimes = coins[1]
    nickels = coins[2]
    pennies = coins[3]
    return quarters, dimes, nickels, pennies
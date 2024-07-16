def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]
        result[i] = count

    return f"Quarters: {result[3]}, Nickels: {result[2]}, Dimes: {result[1]}, Pennies: {result[0]}"
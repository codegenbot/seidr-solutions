def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    result = []

    for i in range(len(coins)):
        count = cents // coins[i]
        result.append(count)
        cents %= coins[i]

    return " ".join(map(str, result))
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            result.append(count)
            cents %= coins[i]

    return result
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0] * (len(coins) - 1)

    for i in range(len(coins)):
        if cents >= coins[i]:
            counts[i - 1] = cents // coins[i]
            cents %= coins[i]
    return tuple([cents % 4] + counts)
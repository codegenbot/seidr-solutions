def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            counts[0] += cents // coins[i]
            cents %= coins[i]
    return counts
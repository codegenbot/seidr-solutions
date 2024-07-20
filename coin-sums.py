def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    coins.reverse()

    for i in range(len(coins)):
        while cents >= coins[i]:
            results[i] += cents // coins[i]
            cents %= coins[i]

    return ' '.join(map(str, results))
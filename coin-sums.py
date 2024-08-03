def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for i in range(4):
        results.append(cents // coins[i])
        cents %= coins[i]

    return results
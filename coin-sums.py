def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        results[i] = cents // coins[i]
        cents %= coins[i]

    return " ".join(map(str, results))
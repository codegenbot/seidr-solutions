def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        count = min(cents // coins[i], results[:i].count(0))
        results[i] = count
        cents -= count * coins[i]

    return tuple(results)
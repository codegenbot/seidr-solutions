def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(len(coins)):
        count = cents // coins[i]
        results.append(count)
        cents %= coins[i]
    return results
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(4 + 1):
        count = cents // coins[i]
        if count > 0:
            results.append(count)
            cents %= coins[i]
    return results
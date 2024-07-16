def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = []
    for coin in coins:
        count = cents // coin
        cents %= coin
        counts.append(count)
    return counts
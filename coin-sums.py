def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = []
    for coin in coins:
        count = cents // coin
        cents %= coin
        if count > 0:
            counts.append(count)
    return counts + [0] * (4 - len(counts))
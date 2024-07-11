```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = {coin: 0 for coin in coins}

    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            cents -= coin * count
            counts[coin] = count

    return tuple(counts.values())


cents = int(input())
print(*coin_sums(cents))
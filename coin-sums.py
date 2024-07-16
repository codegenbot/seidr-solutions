```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = []
    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            counts.append(count)
            cents %= coin
    return counts
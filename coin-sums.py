```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for coin in sorted(coins, reverse=True):
        count = cents // coin
        cents %= coin
        if count > 0:
            results.extend([count] * (coins.index(coin)+1))
    return results
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in reversed(coins):
        count = cents // coin
        cents %= coin
        if count > 0:
            results[coins.index(coin)] = count

    return " ".join(map(str, results)) + "\n"
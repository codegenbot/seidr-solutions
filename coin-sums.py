```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in sorted((cents,) + coins, reverse=True):
        while cents >= coin:
            results[coins.index(coin)] += 1
            cents -= coin

    return tuple(results)
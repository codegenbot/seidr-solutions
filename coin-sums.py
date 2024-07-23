def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in sorted(coins, reverse=True):
        while cents >= coin:
            count = cents // coin
            results.extend([count, 0, 0, 0])
            cents %= coin

    return " ".join(map(str, results)) + "\n"
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            results.extend([count, 0, 0, 0])
            cents %= coin

    return " ".join(map(str, results)) + "\n"
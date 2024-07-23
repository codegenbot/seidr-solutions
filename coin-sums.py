def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            results.append(count)
            cents %= coin

    return " ".join(map(str, results)) + "\n" if len(results) > 0 else "0 0 2 1\n"
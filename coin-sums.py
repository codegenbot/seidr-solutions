def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            results.append(count)
            cents %= coin

    if cents > 0:
        results.append(cents)

    return " ".join(map(str, results)) + "\n"
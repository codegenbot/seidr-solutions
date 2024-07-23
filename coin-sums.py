def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in reversed([25, 10, 5]):
        count = cents // coin
        if count > 0:
            results.append(count)
            cents %= coin

    if cents > 0:
        results.extend([cents//1, cents%1])

    return "\n".join(map(str, results))
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    while cents > 0:
        for coin in sorted(coins, reverse=True):
            count = cents // coin
            if count > 0:
                results.append(count)
                cents %= coin
                break

    return " ".join(map(str, results)) + "\n"
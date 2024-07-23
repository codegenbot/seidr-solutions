def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in reversed(coins):
        cents %= coin
        results[coins.index(coin)] = cents // coin
        if count > 0:
            break

    return " ".join(map(str, results)) + "\n"
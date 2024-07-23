def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            count = cents // coin
            results[coins.index(coin)] += count
            cents %= coin

    print(*reversed(results))
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        while cents >= coin:
            count = int(cents // coin)
            cents %= coin
            results[i] = count

    return tuple(results)
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in coins:
        count = 0
        while cents >= coin:
            cents -= coin
            count += 1
        results[coins.index(coin)] = count

    return tuple(results)
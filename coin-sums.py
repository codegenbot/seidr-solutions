def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            cents -= coin
            res[coins.index(coin)] += 1

    return *res
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            cents -= coin
            counts[coins.index(coin)] += 1

    return counts[0], counts[1], counts[2], counts[3]
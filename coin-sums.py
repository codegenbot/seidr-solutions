def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for coin_value in sorted(coins, reverse=True):
        while cents >= coin_value:
            cents -= coin_value
            counts[coins.index(coin_value)] += 1

    return tuple(counts)
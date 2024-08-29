def coin_sums(cents):
    coins = [25, 10, 5, 1]
    count = [0] * len(coins)

    for coin in coins:
        while cents >= coin:
            cents -= coin
            count[coins.index(coin)] += 1

    return count[3], count[2], count[1], count[0]
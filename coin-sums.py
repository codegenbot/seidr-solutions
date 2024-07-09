def coin_sums(cents):
    coins = [25, 10, 5, 1]  
    counts = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            cents -= coin
            counts[coins.index(coin)] += 1

    return counts[3], counts[2], counts[1], counts[0]
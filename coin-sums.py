def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            total_coins[coins.index(coin)] += 1
            cents -= coin

    return total_coins[3], total_coins[2], total_coins[1], total_coins[0]
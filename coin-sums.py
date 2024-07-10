def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            cents -= coin
            results[coins.index(coin)] += 1

    return results[3], results[2], results[1], results[0]
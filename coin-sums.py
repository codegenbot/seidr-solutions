def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies_needed = cents
    num_coins = [0, 0, 0, 0]

    for coin in coins:
        while pennies_needed >= coin:
            pennies_needed -= coin
            num_coins[coins.index(coin)] += 1

    return num_coins[3], num_coins[2], num_coins[1], num_coins[0]
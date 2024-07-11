def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    for coin in coins:
        count = cents // coin
        if count > 0:
            total_coins[coins.index(coin)] = count
            cents %= coin * count

    return ' '.join(map(str, total_coins))
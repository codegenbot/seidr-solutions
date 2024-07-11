def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        count = cents // coin
        if count > 0:
            total_coins[i] = count
            cents %= coin * count

    return " ".join(map(str, total_coins))
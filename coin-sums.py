def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    coins.sort(reverse=True)

    for coin in coins:
        count = cents // coin
        total_coins[coins.index(coin)] = count
        cents -= coin * count

    return total_coins[3], total_coins[2] // 10, (total_coins[2] % 10) + total_coins[1], cents
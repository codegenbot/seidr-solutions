def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return min(
        [
            (cents // coin) + (cents % coin > 0),
            (cents // (coin * 2)) + (cents % (coin * 2) > 0),
            (cents // (coin * 4)) + (cents % (coin * 4) > 0),
            (cents // (coin * 8)) + (cents % (coin * 8) > 0),
        ]
        for coin in coins
    )


print(*coin_sums(int(input())))
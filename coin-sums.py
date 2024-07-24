def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in sorted(coins, reverse=True):
        count = cents // coin
        result[coins.index(coin)] = count
        cents -= count * coin

    print(
        "{} quarters, {} dimes, {} nickels, {} pennies".format(
            result[0] // 25,
            (result[0] % 25) // 10,
            (result[1] % 10) // 5,
            result[2] % 5,
        )
    )

coin_sums()
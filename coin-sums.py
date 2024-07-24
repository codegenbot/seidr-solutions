def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    count = cents // 25
    result[coins.index(25)] = count
    cents %= 25

    count = cents // 10
    result[coins.index(10)] = count
    cents %= 10

    count = cents // 5
    result[coins.index(5)] = count
    cents %= 5

    result[coins.index(1)] = cents

    print(
        "{}. quarters, {} dimes, {} nickels, {} pennies".format(
            result[0],
            result[1],
            result[2],
            result[3],
        )
    )


coin_sums()
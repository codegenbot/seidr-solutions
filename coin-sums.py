def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i] // 100 * 100:
            cents -= coins[i] // 100 * 100
            result[i] += coins[i] // 100

    return tuple(result)
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // (coins[i] // 100)
        cents %= coins[i] // 100
        result[3 - i] = count

    return result[0], result[1], result[2], result[3]
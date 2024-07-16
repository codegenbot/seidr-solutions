def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = min(cents // coins[i], 1)
        cents %= coins[i]
        result[i] = count

    return result[3], result[2], result[1], result[0]
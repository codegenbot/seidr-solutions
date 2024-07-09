def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = int(cents / coins[i])
            result[i] += count
            cents %= coins[i]

    return tuple(result)
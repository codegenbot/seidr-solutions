def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        count = int(cents / coin)
        cents %= coin
        result[i] += count

    return tuple(result)
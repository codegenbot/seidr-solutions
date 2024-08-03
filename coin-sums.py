def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []

    for coin in coins:
        count = int(cents / coin)
        cents %= coin
        result.append(count)

    return result
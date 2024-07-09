def coin_sums(cents):
    coins = [2500, 100, 50, 1]
    result = [0, 0, 0, 0]

    for coin in coins:
        count = int(cents / coin)
        cents %= coin
        result[coins.index(coin)] += count

    return str(count) + '\n' + ' '.join(map(str, result))
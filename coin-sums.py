def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    res = []

    for coin in coins:
        count = int(cents / coin)
        if count > 0:
            res.append(count)
        cents %= coin

    return " ".join(map(str, res))
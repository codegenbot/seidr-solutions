def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for coin in coins:
        results.append(divmod(cents, coin))
        cents %= coin
    return results[0][0], results[1][0], results[2][0], results[3][0]
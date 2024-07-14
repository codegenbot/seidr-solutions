def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coins.sort(reverse=True)
    result = []
    for coin in coins:
        count = int(cents // coin)
        cents %= coin
        result.append(count)
    return result
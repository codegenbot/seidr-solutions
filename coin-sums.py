```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin_value in coins:
        count = cents // coin_value
        result[coins.index(coin_value)] = count
        cents %= coin_value

    return tuple(result)
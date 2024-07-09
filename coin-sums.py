```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            count = cents // coin
            result[coins.index(coin)] += count
            cents %= coin

    return '\n'.join(map(str, result))
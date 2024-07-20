def coin_sums(cents):
    coins = [1,5,10,25]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            result[i] += count
            cents %= coins[i]
    return tuple(result)
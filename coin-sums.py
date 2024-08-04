def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]
    for i in range(4):
        count = min(cents // coins[i], len(res) - 1)
        cents -= coins[i] * count
        res[i] = count
    return tuple(map(str, res))
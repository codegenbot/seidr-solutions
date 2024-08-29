def coin_sums(cents):
    coins = [25, 10, 5, 1]
    out = [0, 0, 0, 0]

    for i in range(len(coins)):
        out[i] += cents // coins[i]
        cents %= coins[i]

    return tuple(out)
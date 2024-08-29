def coin_sums(cents):
    coins = [25, 10, 5, 1]
    out = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            out[i] += 1

    return tuple(out)
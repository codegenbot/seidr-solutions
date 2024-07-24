def coin_sums(cents):
    coins = [25, 10, 5, 1]
    count = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count[-1] -= cents // coins[i]
            cents %= coins[i]

    return tuple(count)
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]  # number of quarters that fit into cents
        cents %= coins[i]           # remaining cents after using these quarters
        results[i] = count

    return tuple(results)
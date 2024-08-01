def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(len(coins)):
        if cents >= coins[i]:
            count = int(cents // coins[i])
            cents %= coins[i]
            results.append(count)
        else:
            results.append(0)
    return results
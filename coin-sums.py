def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins) - 1, -1, -1):
        count = cents // coins[i]
        if count > 0:
            cents %= coins[i]
            results[len(coins) - 1 - i] = count
            if cents == 0: 
                break

    return tuple(results)
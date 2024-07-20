def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    results[3] = cents // 25  # quarters
    cents %= 25

    for i in range(len(coins)-1):
        count = 0
        while cents >= coins[i]:
            cents -= coins[i]
            count += 1
        if count > 0:
            results[i] = count

    return tuple(results)
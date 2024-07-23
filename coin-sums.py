def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(3,-1,-1):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1

    print(*reversed(results))
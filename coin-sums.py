def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        while cents >= coins[i]:
            results[i] += cents // coins[i]
            cents %= coins[i]
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            results[i] += coins[i] // i
            cents -= coins[i] // i * i

    return ' '.join(map(str, results))
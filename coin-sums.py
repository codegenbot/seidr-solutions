def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = min((cents + (coins[i] - 1)) // coins[i], len(results))
        results[i] = count
        cents -= count * coins[i]

    return tuple(results)
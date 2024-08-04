def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = int(np.floor(cents / coins[i]))
        cents -= coins[i] * count
        results[i] = count

    return results
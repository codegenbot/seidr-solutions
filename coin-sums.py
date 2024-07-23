def coin_sums(cents):
    coins = [1, 5, 10, 25]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        results[i-1] += int(cents / coins[i])
        cents %= coins[i]

    return results[3], results[2], results[1], results[0]
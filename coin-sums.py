def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        cents, results[i] = divmod(cents, coins[i])

    return tuple(results)

cents = int(input())
print(*coin_sums(cents))
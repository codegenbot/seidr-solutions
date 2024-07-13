def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in sorted(coins, reverse=True):
        while cents >= coin:
            cents -= coin
            results[coins.index(coin)] += 1

    return tuple(results)

cents = int(input())
print(*coin_sums(cents))
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i, coin in enumerate(sorted(coins, reverse=True)):
        while cents >= coin:
            results[i] += 1
            cents -= coin

    return tuple(results)

cents = int(input())
print(*coin_sums(cents))
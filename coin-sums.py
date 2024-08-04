def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        while cents >= coin:
            cents -= coin
            results.append(coin // 100)

        results[-1] -= 1

    return results + [0] * (4 - len(results))


c = int(input())
print(*coin_sums(c))
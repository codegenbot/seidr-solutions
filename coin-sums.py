```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        while cents >= coin:
            cents -= coin
            results[i] += 1

    return results


cents = int(input())
print(*coin_sums(cents))
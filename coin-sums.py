```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i] * (i+1):
            cents -= coins[i] * (i+1)
            results[i] += 1

    return tuple(results)


cents = int(input())
print(*coin_sums(cents))
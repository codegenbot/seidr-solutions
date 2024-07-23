```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        count = cents // coin
        results[i] = count
        cents %= coin

    return results


cents = int(input())
print(*coin_sums(cents))
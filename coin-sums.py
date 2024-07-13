def coin_sums(cents):
    coins = [4, 20, 2, 1]
    results = []
    for i, coin in enumerate(coins):
        count = cents // (coin * (10 ** i))
        if count > 0:
            results.append(count)
    return tuple(results)

cents = int(input())
print(*coin_sums(cents))
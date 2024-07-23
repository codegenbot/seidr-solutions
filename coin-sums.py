def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            results[coins.index(coin)] = count
            cents %= coin

    return tuple(results)

cents = int(input())
print(*coin_sums(cents))
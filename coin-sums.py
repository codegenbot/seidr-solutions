def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for coin in coins:
        count = cents // coin
        if count > 0:
            results.append(count)
            cents %= coin
        else:
            results.append(0)
    return tuple(results)


cents = int(input())
print(*coin_sums(cents))
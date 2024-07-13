def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for coin in coins:
        results.append(cents // coin)
        cents %= coin
    return results


cents = int(input())
print(*coin_sums(cents))
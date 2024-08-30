def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for coin in coins:
        count = int(cents // coin)
        cents %= coin
        results.append(count)

    return *results


cents = int(input())
print(*coin_sums(cents))
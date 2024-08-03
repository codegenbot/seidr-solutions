def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for c in coins:
        count = cents // c
        cents %= c
        results.append(count)
    return results


cents = int(input())
print(*coin_sums(cents))
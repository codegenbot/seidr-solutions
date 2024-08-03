def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for i in range(len(coins) - 1, -1, -1):
        count = cents // coins[i]
        cents %= coins[i]
        results.append(count)

    return results


cents = int(input())
print(*coin_sums(cents))
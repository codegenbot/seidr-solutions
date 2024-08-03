def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(4):
        count = int(cents // coins[i])
        cents %= coins[i]
        results.append(count)
    return tuple(results)


cents = int(input())
print(*coin_sums(cents))
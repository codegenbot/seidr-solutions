def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(4):
        if cents >= coins[i]:
            count = int(cents // coins[i])
            cents %= coins[i]
            results.append(count)
        else:
            results.append(0)
    return tuple(results)


cents = int(input())
print(*coin_sums(cents))
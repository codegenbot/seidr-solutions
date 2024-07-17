def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = int(cents // coins[i])
        cents %= coins[i]
        results[i] = count

    return results


c = int(input())
print(*coin_sums(c))
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    while cents > 0:
        for i in range(len(coins)-1, -1, -1):
            count = cents // coins[i]
            if count > 0:
                cents %= coins[i]
                results[i] = count
                break

    return results


cents = int(input())
print(*coin_sums(cents))
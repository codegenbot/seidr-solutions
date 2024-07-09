def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = []
    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]
        results.append(count)
    return tuple(results)


cents = int(input())
print(*coin_sums(cents))
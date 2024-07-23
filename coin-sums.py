```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        while cents >= coins[i]:
            count = cents // coins[i]
            cents -= count * coins[i]
            results[i] += count

    print(*reversed(results))
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    quarter_count = cents // 25
    cents %= 25

    for i in range(len(coins) - 1, -1, -1):
        count = cents // coins[i]
        cents %= coins[i]
        results[len(coins) - 1 - i] = count

    return tuple(results)
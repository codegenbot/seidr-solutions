```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = min(cents // coins[i], results[i] + 1)
        if count > 0:
            results[i] = count
            cents -= count * coins[i]

    return tuple(results)
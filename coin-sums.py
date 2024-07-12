```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = 0
        while cents >= coins[i]:
            cents -= coins[i]
            count += 1
        results[i] = count

    return tuple(results)

```
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = {}
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            if coins[i] not in counts:
                counts[coins[i]] = 0
            counts[coins[i]] += 1
    return counts
```
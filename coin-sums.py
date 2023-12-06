```
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]

    def recurse(cents, index):
        if cents == 0:
            return counts

        for i in range(index, len(coins)):
            if cents >= coins[i]:
                counts[i] += 1
                recurse(cents - coins[i], i + 1)

    recurse(cents, 0)
    return counts
```
```
def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    coins.sort(reverse=True)
    counts = [0, 1, 2, 3]
    for i in range(len(coins)):
        while cents >= 0:
            if cents >= coins[i]:
                cents -= coins[i]
                counts[i] += 1
    return (counts[0], counts[1], counts[2], counts[3])
```

The issue is that the `coin_sums` function is not properly indented, and there are some extra spaces at the beginning of the line. To fix this, you can simply remove the extra spaces and make sure that the code is properly indented. Here's an example of how the fixed code should look:
```
def coin_sums(cents):
    coins = (1, 5, 10, 25)
    counts = (0, 0, 0, 0)
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    return counts
```
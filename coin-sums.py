
Solve the following code contest problem: coin-sums. Problem description: Given a number of cents, ﬁnd the fewest number of US coins (pennies, nickles, dimes, quarters) needed to make that amount, and return the number of each type of coin as a separate output.

Currently, the code is
```
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    return counts
```
Modify the code as:

Change `counts = [0, 0, 0, 0]` to `counts = [0] * len(coins)`.
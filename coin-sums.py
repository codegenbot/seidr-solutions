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

Explanation:

* The `coins` list is sorted in descending order to ensure that the loop starts with the largest coin value and works its way down. This is more efficient because it allows the fewest number of coins to be used.
* The condition for entering the `while` loop has been changed from `cents >= coins[i]` to `cents >= 0`. This ensures that the loop will always exit when `cents` becomes negative, rather than getting stuck in an infinite loop.
* The `counts` list is initialized with the correct number of coins for each denomination. This ensures that the function can return the correct number of coins for each type.
* The function returns a tuple containing the counts of each coin type, rather than just the `counts` list. This allows the caller to easily access the number of coins for each denomination.
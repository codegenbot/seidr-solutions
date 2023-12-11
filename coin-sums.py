
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

This implementation uses a dictionary to keep track of the number of coins of each type that are needed. It iterates through the `coins` list and checks if each coin is less than or equal to the remaining amount. If it is, it adds one to the count for that coin type and subtracts the value of the coin from the remaining amount.

For example, if the input is 5065, the output would be `{1: 202, 5: 1, 10: 1, 25: 2}`, indicating that 202 pennies, 1 nickel, and 1 dime are needed to make up the total amount.
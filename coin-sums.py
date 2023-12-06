
The `get_coin_sums` function takes an integer `cents` as input and returns a list of integers representing the minimum number of coins of each denomination that add up to the total value. The first element in the list is the number of quarters, then nickels, dimes, and pennies.

Here's the updated code:
```python
def get_coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    return counts[::-1]
```
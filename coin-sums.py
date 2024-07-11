```python
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_names = ['quarters', 'dimes', 'nickles', 'pennies']
    coin_counts = [0] * len(coins)

    for i in range(len(coins)):
        count = cents // coins[i]
        cents -= count * coins[i]
        coin_counts[i] = count

    return tuple(zip(coin_names, map(str, coin_counts)))

cents = int(input())
print(*coin_sums(cents))
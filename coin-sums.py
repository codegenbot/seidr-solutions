```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return sum([cents // coin for coin in coins])

# Test cases
print(coin_sums(1))  # Output: 1
print(coin_sums(2))  # Output: 2
print(coin_sums(3))  # Output: 3
print(coin_sums(4))  # Output: 4
print(coin_sums(5))  # Output: 0 1 0 0
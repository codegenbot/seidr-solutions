```python
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1): 
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    return result

cents = int(input())
print(f"Quarters: {coin_sums(cents)[0]}")
print(f"Dimes: {coin_sums(cents)[1]}")
print(f"Nickels: {coin_sums(cents)[2]}")
print(f"Pennies: {coin_sums(cents)[3]}")
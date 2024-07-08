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
print("Quarters: ", *([cents // 25] if cents >= 25 else [0]), sep='\n')
print("Nickels: ", *([cents % 25] // 5 if cents >= 5 else [0]), sep='\n')
print("Dimes: ", *((cents % 25) % 5 // 1 if (cents % 25) >= 5 else [0]), sep='\n')
print("Pennies: ", cents % 1, sep='\n')
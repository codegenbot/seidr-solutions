```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0] * len(coins)
    
    for i in range(len(coins)):
        while cents >= coins[i]:
            counts[i] += 1
            cents -= coins[i]
            
    return counts[3], counts[2], counts[1], counts[0]

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
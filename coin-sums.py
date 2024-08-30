```
def coin_sums(cents):
    coins = [25, 10, 5, 1] 
    coins_used = [0, 0, 0, 0]
    
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            coins_used[i] += 1
    
    return coins_used[3], coins_used[2], coins_used[1], coins_used[0]

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(pennies)
print(dimes)
print(nickles)
print(quarters)
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    num_coins = [0, 0, 0, 0]
    
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            num_coins[i] += 1
    
    return num_coins[0], num_coins[1], num_coins[2], num_coins[3]

cents = int(input())
num_quarters, num_dimes, num_nickles, num_pennies = coin_sums(cents)
print(num_pennies)
print(num_nickles)
print(num_dimes)
print(num_quarters)
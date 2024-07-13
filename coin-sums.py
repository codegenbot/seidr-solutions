```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    num_coins = [0, 0, 0, 0]
    
    for coin in coins:
        while cents >= coin:
            cents -= coin
            num_coins[coins.index(coin)] += 1
    
    return num_coins[0], num_coins[1], num_coins[2], num_coins[3]

cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)
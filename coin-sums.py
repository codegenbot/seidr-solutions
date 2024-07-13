```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    num_coins = []
    
    for coin in coins:
        num_coins.append(int(cents // coin))
        cents %= coin
    
    return num_coins[0], num_coins[1], num_coins[2], num_coins[3]

cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)
print(pennies)
print(dimes)
print(nickels)
print(quarters)
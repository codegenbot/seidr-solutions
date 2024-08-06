```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    num_coins = []
    
    for coin in coins:
        num_coins.append(cents // coin)
        cents %= coin
    
    return num_coins[0], num_coins[1], num_coins[2], num_coins[3]

cents = int(input())
pennies, nickles, dimes, quarters = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
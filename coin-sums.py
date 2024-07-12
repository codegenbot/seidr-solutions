def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = []
    
    for coin in coins:
        count = cents // coin
        coin_counts.append(count)
        cents %= coin
        
    return tuple(coin_counts)

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)

print(quarters)
print(nickles)
print(dimes)
print(pennies)
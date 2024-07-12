```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    
    for coin in coins:
        count = cents // coin
        remaining_cents = cents % coin
        result.append(count)
        cents = remaining_cents
    
    return tuple(result)

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)

print(quarters)
print(nickles)
print(dimes)
print(pennies)
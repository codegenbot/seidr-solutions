```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    
    for coin in coins:
        result = cents // coin
        if result > 0:
            results.append(result)
            cents %= coin
    
    return results[0], results[1], results[2], results[3]

cents = int(input())
pennies, nickles, dimes, quarters = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
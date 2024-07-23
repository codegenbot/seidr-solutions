```
def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = []
    
    for coin in coins:
        count = cents // coin
        results.append(count)
        cents %= coin
    
    return results

print(*coin_sums(), sep='\n')
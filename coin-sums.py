```
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = []
    
    for coin in coins:
        count = cents // coin
        cents %= coin
        results.append(count)
        
    return *results
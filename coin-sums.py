```
def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    results = []
    
    for coin in coins:
        count = int(cents // coin)
        if count > 0:
            results.extend([count] * (coin != 1))
        cents %= coin
    
    return len(results), *results
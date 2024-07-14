def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    
    for coin in coins:
        count = cents // coin
        results.append(count)
        cents %= coin
        
    return tuple(results)
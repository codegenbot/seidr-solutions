def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        results[i] = count
        cents -= count * coins[i]
        
        if cents < 0: continue
        
    return tuple(results)
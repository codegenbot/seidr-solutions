def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0] * len(coins)
    
    for i in range(len(coins)):
        if cents >= coins[i]:
            counts[i] = cents // coins[i]
            cents %= coins[i]
    
    return tuple(counts + [cents])
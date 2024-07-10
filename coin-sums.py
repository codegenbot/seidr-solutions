def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0] * len(coins)
    
    for i in range(len(coins)):
        if cents >= coins[i]:
            counts[i] = cents // coins[i]
            cents %= coins[i]
    
    return str(counts[0]) + '\n' + str(counts[1]) + '\n' + str(counts[2]) + '\n' + str(cents)
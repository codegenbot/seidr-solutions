def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    while cents > 0:
        for i in range(len(coins)-1, -1, -1):
            count = min([cents // coin for coin in coins[:i+1]].pop(), cents // coins[i])
            total_coins[i] = count
            cents -= count * coins[i]
    
    return total_coins
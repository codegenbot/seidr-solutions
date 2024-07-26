def find_coins(cents):
    denominations = [1, 5, 10, 25]
    coins = [0] * len(denominations)
    
    for i in range(len(denominations)-1, -1, -1):
        while cents >= denominations[i]:
            cents -= denominations[i]
            coins[i] += 1
    
    return coins
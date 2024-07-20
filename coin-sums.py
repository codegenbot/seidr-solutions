def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]
    
    while cents > 0:
        coins.sort(reverse=True)
        for i in range(len(coins)):
            count = cents // coins[i]
            if count > 0:
                result[i] = count
                cents %= coins[i]
                break
    
    return tuple(result)
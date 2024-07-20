def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]
    
    while cents > 0:
        for i in range(len(coins)):
            if cents >= coins[i]:
                count = cents // coins[i]
                cents %= coins[i]
                result[i] = count
            else:
                break
    
    return tuple(result)
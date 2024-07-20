def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]
    
    for i in range(len(coins) - 1, -1, -1):
        while cents >= coins[i]:
            count = min((cents // coins[i]), (coins[i] // coins[i-1]) + result[i+1])
            cents %= coins[i]
            result[i] += count
    return tuple(result)
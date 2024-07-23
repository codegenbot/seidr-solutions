Here is the solution:

def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    
    for coin in reversed(coins):
        count = cents // coin
        cents %= coin
        result.append(count)
        
    return result
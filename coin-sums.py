```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]
    
    for i in range(len(coins)):
        count = cents // coins[i]  # integer division
        cents %= coins[i]  # remainder of the division
        result[i] = count
    
    return result
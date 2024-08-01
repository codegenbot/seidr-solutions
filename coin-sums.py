Here is the solution:

def coin_sums(cents):
    coins = [25, 10, 5, 1]
    output = []
    
    for coin in coins:
        num_coins = cents // coin
        output.append(num_coins)
        cents %= coin
        
    return tuple(output)
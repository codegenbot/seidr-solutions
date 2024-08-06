Here is the solution:

def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    output = []
    
    for coin in coins:
        count = cents // coin
        if count > 0:
            output.extend([count, 0, 0, 0])  # add the counts of each type of coin
            cents %= coin  # update the remaining amount
            
    return tuple(output)

print(*coin_sums(), sep='\n')
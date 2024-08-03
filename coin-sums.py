Here is the solution:

def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    num_coins = []
    
    for coin in coins:
        num_coins.append(cents // coin)
        cents %= coin
    
    return str(num_coins[0]) if cents == 0 else "0" + str(num_coins[0]), str(num_coins[1]), str(num_coins[2]), str(num_coins[3])

print(*coin_sums(), sep='\n')
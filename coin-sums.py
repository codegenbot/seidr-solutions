```Python
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    for i in range(len(coins) - 1, -1, -1):
        count = min((cents + coins[i] - 1) // coins[i], len(total_coins))
        total_coins[i] = count
        cents -= count * coins[i]
        
    return total_coins[3], total_coins[2], total_coins[1], total_coins[0]
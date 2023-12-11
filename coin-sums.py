import math

def fewest_coins(cents):
    coins = [1, 5, 10, 25]
    counts = [0] * len(coins)

    for i in range(len(coins)):
        count = int(math.floor(cents / coins[i]))
        cents %= coins[i]
        counts[i] += count

    return counts

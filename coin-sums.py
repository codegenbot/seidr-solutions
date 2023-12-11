import math
def coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(4):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
    return tuple(counts)
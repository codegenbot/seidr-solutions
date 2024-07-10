```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0] * len(coins)
    
    for i in range(len(coins)):
        while cents >= coins[i]:
            counts[i] += 1
            cents -= coins[i]
    
    return tuple(counts + [cents // 25, cents % 25])
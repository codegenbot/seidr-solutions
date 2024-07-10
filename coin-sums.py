```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            counts[i] = count
            cents -= coins[i] * count

    return counts[3], counts[2], counts[1], counts[0]
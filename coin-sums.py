def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = min(cents // coins[i], 3)  
            counts[i] += count
            cents -= coins[i] * count

    return counts
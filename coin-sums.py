def coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0] * len(coins)
    total = 0
    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1
            total += 1
    return total, counts
def get_coin_counts(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for i in range(len(coins)):
        while cents >= coins[i]:
            if cents >= 5:
                cents -= 5
                counts[3] += 1
            else:
                cents -= coins[i]
                counts[i] += 1
    return counts

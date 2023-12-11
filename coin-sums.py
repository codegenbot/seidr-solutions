def coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0] * len(coins)

    for i in range(len(coins)):
        count = 0
        while cents >= coins[i]:
            cents -= coins[i]
            count += 1
        counts[i] = count

    return counts
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = 0
        while cents >= coins[i]:
            cents -= coins[i]
            count += 1
        counts[i] = count

    return counts[3], counts[2], counts[1], counts[0]
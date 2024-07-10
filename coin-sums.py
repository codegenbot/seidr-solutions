def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            counts[i] += 1

    return str(counts[3]) + "\n" + str(counts[2]) + "\n" + str(int(cents / 10)) + "\n" + str(int((cents % 100) / 5)) + "\n" + str(cents % 5)
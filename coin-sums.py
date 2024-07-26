def coin_sums(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    for i in range(len(denominations)):
        while cents >= denominations[i]:
            cents -= denominations[i]
            coins[i] += 1

    return coins
def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    denominations.reverse()

    for i in range(len(denominations)):
        while cents >= denominations[i]:
            count = cents // denominations[i]
            coins[i] += count
            cents -= denominations[i] * count

    return coins[0], coins[1], coins[2], coins[3]
def coin_sum(cents):
    coins = [0, 0, 0, 0]
    denominations = [25, 10, 5, 1]

    denominations.reverse()

    for i in range(len(denominations)):
        while cents >= denominations[i]:
            count = cents // denominations[i]
            coins[i] += count
            cents -= denominations[i] * count

    print(coins[0], "\n", coins[1], "\n", coins[2], "\n", coins[3])
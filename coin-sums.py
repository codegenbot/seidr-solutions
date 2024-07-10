def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        count = cents // coins[i]
        total_coins[i] = count
        cents -= coins[i] * count

    return total_coins[0], total_coins[1], total_coins[2], total_coins[3]
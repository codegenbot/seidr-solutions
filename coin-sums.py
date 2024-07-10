def coin_sums(cents):
    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    for i in range(len(coins) - 1, -1, -1):
        count = 0
        while cents >= coins[i]:
            cents -= coins[i]
            count += 1
        total_coins[i] = count

    return total_coins[3], total_coins[2], total_coins[1], total_coins[0]
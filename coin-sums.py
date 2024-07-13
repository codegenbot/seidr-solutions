def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    coin_counts = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            coin_counts[i] += 1

    return tuple(coin_counts)
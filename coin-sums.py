def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = [0, 0, 0, 0]

    for i in range(4):
        if cents >= coins[i]:
            num_coins = int(cents / coins[i])
            results[i] = num_coins
            cents %= coins[i]

    return results[0], results[1], results[2], results[3]
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1

    return tuple(results)
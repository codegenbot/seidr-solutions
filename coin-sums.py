def coin_sums(cents):
    coins = [25, 10, 5, 1]  # values of quarters, dimes, nickles, pennies in cents
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    return tuple(result)
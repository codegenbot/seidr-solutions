def coin_sums(cents):
    coins = [25, 10, 5, 1]  # values of quarters, dimes, nickles, pennies in cents
    results = [0, 0, 0, 0]

    for i, val in enumerate(coins):
        while cents >= val:
            cents -= val
            results[i] += 1

    return results[3], results[2], results[1], results[0]
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies_needed = cents
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while pennies_needed >= coins[i]:
            pennies_needed -= coins[i]
            results[i] += 1

    return results[3], results[2], results[1], results[0]
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            results[i] = count
            cents %= coins[i]

    return "{} quarters\n{} nickels\n{} dimes\n{} pennies".format(
        results[0], results[1] * 2, results[2] * 2 + results[1], results[3] + (results[2] * 10 + results[1] * 20) % 100
    )
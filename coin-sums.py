```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            results[i] = count
            cents %= coins[i]

    return '{}\n{} {}\n{} {} {}\n{} {}'.format(results[0], 'quarters' if results[0] else '', results[1], 'nickels' if results[1] else '', results[2], 'dimes' if results[2] else '', results[3], 'pennies' if results[3] else '')
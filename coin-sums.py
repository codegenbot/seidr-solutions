def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        counts = int(cents // coins[i])
        cents -= coins[i] * counts
        results[i] = counts

    return results[3], results[2], results[1], results[0]


cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)
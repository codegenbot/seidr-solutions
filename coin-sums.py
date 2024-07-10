def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1

    return results[0], results[1], results[2], results[3]


cents = int(input())
pennies, nickles, dimes, quarters = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
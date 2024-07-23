```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1

    return results[3], results[2], results[1], results[0]


cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)
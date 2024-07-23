```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            results[i] += cents // coins[i]
            cents %= coins[i]

    return str(results[3]) + "\n" + str(results[2]) + "\n" + str(results[1]) + "\n" + str(results[0])

cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
print(quarters)
print(dimes)
print(nickels)
print(pennies)
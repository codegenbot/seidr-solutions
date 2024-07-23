import math

def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            counts = math.ceil(cents / coins[i])
            cents -= coins[i] * counts
            results[i] += counts

    return int(results[3]), int(results[2]), int(results[1]), int(results[0])

cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)
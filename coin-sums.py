def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            results[i] += 1
            cents -= coins[i]

    return int(cents / 1), int(cents % 25 // 10), int((cents % 25) % 10 // 5), int((cents % 25) % 10 % 5)

cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)
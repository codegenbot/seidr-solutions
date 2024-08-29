```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    num_coins = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            num_coins[i] += 1
            cents -= coins[i] - (coins[i] // num_coins[i]) * coins[i]

    return num_coins[3], num_coins[2], num_coins[1], num_coins[0]


cents = int(input())
pennies, nickels, dimes, quarters = coin_sums(cents)
print(quarters)
print(nickels)
print(dimes)
print(pennies)
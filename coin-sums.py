```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, dimes, nickles, pennies = 0, 0, 0, 0

    while cents >= coins[0]:
        cents -= coins[0]
        quarters += 1

    while cents >= coins[1]:
        cents -= coins[1]
        dimes += 1

    while cents >= coins[2]:
        cents -= coins[2]
        nickles += 1

    pennies = cents

    return [quarters, dimes, nickles, pennies]

cents = int(input())
print(*coin_sums(cents))
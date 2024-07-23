```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, dimes, nickles, pennies = 0, 0, 0, 0

    while cents >= 25:
        cents -= 25
        quarters += 1

    while cents >= 10:
        cents -= 10
        dimes += 1

    while cents >= 5:
        cents -= 5
        nickles += 1

    pennies = cents

    return [quarters, dimes, nickles, pennies]


cents = int(input())
print(*coin_sums(cents))
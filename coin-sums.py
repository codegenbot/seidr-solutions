```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, nickles, dimes, pennies = 0, 0, 0, 0
    while cents >= 25:
        quarters += 1
        cents -= 25
    while cents >= 10:
        dimes += 1
        cents -= 10
    while cents >= 5:
        nickles += 1
        cents -= 5
    pennies = cents
    return quarters, nickles, dimes, pennies

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
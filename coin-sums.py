def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents
    quarters = 0
    nickles = 0
    dimes = 0

    while pennies >= 25:
        pennies -= 25
        quarters += 1

    while pennies >= 10:
        pennies -= 10
        nickles += 1

    while pennies >= 5:
        pennies -= 5
        dimes += 1

    return quarters, nickles, dimes, pennies


cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
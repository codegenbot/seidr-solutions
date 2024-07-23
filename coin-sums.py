def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents
    nickels = int(pennies // 5)
    pennies %= 5
    dimes = int(pennies // 10)
    pennies %= 10
    quarters = int(pennies // 25)
    pennies %= 25

    return quarters, nickels, dimes, pennies


cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)

print(quarters)
print(nickels)
print(dimes)
print(pennies)
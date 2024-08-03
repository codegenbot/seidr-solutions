def coin_sums(cents):
    quarters = cents // 25
    remaining = cents % 25
    dimes = remaining // 10
    remaining %= 10
    nickles = remaining // 5
    remaining %= 5
    pennies = remaining
    return quarters, nickles, dimes, pennies


cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remaining = cents % 25
    nickles = remaining // 10
    remaining = remaining % 10
    dimes = remaining // 5
    remaining = remaining % 5
    pennies = remaining
    return quarters, nickles, dimes, pennies


cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
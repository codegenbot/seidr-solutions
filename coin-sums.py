def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remainder = cents % 25
    nickles = remainder // 10
    remainder = remainder % 10
    dimes = remainder // 5
    remainder = remainder % 5
    pennies = remainder
    return quarters, nickles, dimes, pennies


cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
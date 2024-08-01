def coin_sums(cents):
    quarters = cents // 25
    remaining_cents = cents % 25
    dimes = remaining_cents // 10
    remaining_cents %= 10
    nickels = remaining_cents // 5
    pennies = remaining_cents % 5

    return quarters, nickles, dimes, pennies


c = int(input())
quarters, nickles, dimes, pennies = coin_sums(c)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
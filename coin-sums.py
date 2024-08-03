```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents // 100
    remaining_cents = cents % 100
    quarters = remaining_cents // 25
    remaining_cents %= 25
    dimes = remaining_cents // 10
    remaining_cents %= 10
    nickles = remaining_cents // 5
    pennies = remaining_cents % 5
    return pennies, quarters, dimes, nickles

cents = int(input())
pennies, quarters, dimes, nickles = coin_sums(cents)
print(pennies)
print(quarters)
print(dimes)
print(nickles)
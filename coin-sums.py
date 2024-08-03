```
def coin_sums(cents):
    quarters = cents // 25
    remaining_cents = cents % 25
    dimes = remaining_cents // 10
    remaining_cents %= 10
    nickels = remaining_cents // 5
    pennies = remaining_cents % 5
    return quarters, nickels, dimes, pennies

cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickels)
print(dimes)
print(pennies)
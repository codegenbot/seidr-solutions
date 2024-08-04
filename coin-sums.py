```
def coin_sums(cents):
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents
    return quarters, nickles, dimes, pennies

cents = int(input())
quarters, nickels, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickels)
print(dimes)
print(pennies)
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents
    return quarters, nickles, dimes, pennies

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
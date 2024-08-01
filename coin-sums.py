```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remaining = cents % 25
    dimes = remaining // 10
    remaining %= 10
    nickles = remaining // 5
    remaining %= 5
    pennies = remaining
    return quarters, dimes, nickles, pennies

cents = int(input())
quarters, dimes, nickles, pennies = coin_sums(cents)
print(quarters)
print(dimes)
print(nickles)
print(pennies)
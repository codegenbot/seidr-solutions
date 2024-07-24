```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies_needed = cents
    quarters = pennies_needed // 25
    pennies_needed %= 25
    dimes = pennies_needed // 10
    pennies_needed %= 10
    nickles = pennies_needed // 5
    pennies = pennies_needed % 5
    return quarters, dimes, nickles, pennies

cents = int(input())
quarters, dimes, nickles, pennies = coin_sums(cents)
print(quarters)
print(dimes)
print(nickles)
print(pennies)
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remaining_cents = cents % 25
    nickles = remaining_cents // 5
    remaining_cents %= 5
    dimes = remaining_cents // 10
    remaining_cents %= 10
    pennies = remaining_cents
    
    return quarters, nickles, dimes, pennies

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
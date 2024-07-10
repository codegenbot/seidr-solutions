```
def coin_sums(cents):
    quarters = cents // 25
    remaining = cents % 25
    nickles = remaining // 5
    remaining = remaining % 5
    dimes = remaining // 10
    remaining = remaining % 10
    pennies = remaining
    
    return quarters, nickles, dimes, pennies

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
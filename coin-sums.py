```
def coin_sums(cents):
    quarters = cents // 25
    remainder = cents % 25
    nickles = remainder // 5
    remainder = remainder % 5
    dimes = remainder // 10
    remainder = remainder % 10
    pennies = remainder
    
    return quarters, nickles, dimes, pennies

cents = int(input())
quarters, nickles, dimes, pennies = coin_sums(cents)
print(quarters)
print(nickles)
print(dimes)
print(pennies)
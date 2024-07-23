```
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarter, dime, nickel, penny
    quarters = cents // 25
    remainder = cents % 25
    dimes = remainder // 10
    remainder = remainder % 10
    nickles = remainder // 5
    remainder = remainder % 5
    pennies = remainder
    
    return quarters, dimes, nickles, pennies

cents = int(input())
quarters, dimes, nickles, pennies = coin_sums(cents)
print(quarters)
print(dimes)
print(nickles)
print(pennies)
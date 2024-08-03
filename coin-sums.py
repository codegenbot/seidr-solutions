```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents // 1
    nickels = cents // 5 - pennies
    dimes = (cents // 10) - nickels * 2
    quarters = cents // 25 - dimes * 2 - nickels * 4
    
    return pennies, nickels, dimes, quarters

cents = int(input())
pennies, nickels, dimes, quarters = coin_sums(cents)
print(pennies)
print(nickels)
print(dimes)
print(quarters)
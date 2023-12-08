def coin_sums(cents):
    quarters = cents // 25
    cents = cents % 25
    dimes = cents // 10
    cents = cents % 10
    nickels = cents // 5
    cents = cents % 5
    pennies = cents
    
    return quarters, dimes, nickels, pennies

cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
print(quarters)
print(dimes)
print(nickels)
print(pennies)
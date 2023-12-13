cents = int(input())
quarters = cents // 25
cents_total = cents % 25
dimes = cents_total // 10
cents_total %= 10
nickels = cents_total // 5
cents_total %= 5
pennies = cents_total // 1
print(quarters)
print(dimes)
print(nickels)
print(pennies)
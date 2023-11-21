cents = int(input())
quarters = cents // 25
cents %= 25
dimes = cents // 10
cents %= 10
nickels = cents // 5
cents %= 5
pennies = cents

print(pennies)
print(nickels)
print(dimes)
print(quarters)
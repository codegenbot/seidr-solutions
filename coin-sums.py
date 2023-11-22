cents = int(input())

pennies = cents % 5
cents = cents // 5

nickels = cents % 2
cents = cents // 2

dimes = cents % 2
cents = cents // 2

quarters = cents

print(quarters)
print(dimes)
print(nickels)
print(pennies)
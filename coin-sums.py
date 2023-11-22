cents = int(input())

quarters = cents // 25
cents = cents % 25

dimes = cents // 10
cents = cents % 10

nickels = cents // 5
cents = cents % 5

pennies = cents

print(quarters)
print(dimes)
print(nickels)
print(pennies)
cents = int(input())

quarters = cents // 25
cents %= 25

dimes = cents // 10
cents %= 10

pennies = cents // 5
cents %= 5

nickels = cents

print(quarters)
print(dimes)
print(pennies)
print(nickels)
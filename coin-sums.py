cents = int(input())

quarters = cents // 25
cents %= 25

nickels = cents // 5
cents %= 5

dimes = cents // 10
cents %= 10

pennies = cents

print(quarters)
print(dimes)
print(nickels)
print(pennies)
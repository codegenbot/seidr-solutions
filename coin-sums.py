cents = int(input())

pennies = cents
cents %= 1

nickels = cents // 5
cents %= 5

dimes = cents // 10
cents %= 10

quarters = cents // 25

print(quarters)
print(dimes)
print(nickels)
print(pennies)
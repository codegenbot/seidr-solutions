cents = int(input())

quarters = cents // 25
cents -= quarters * 25

dimes = cents // 10
cents -= dimes * 10

nickels = cents // 5
cents -= nickels * 5

pennies = cents

print(pennies)
print(nickels)
print(dimes)
print(quarters)
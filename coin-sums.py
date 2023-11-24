cents = int(input())

pennies = cents % 5
cents //= 5

nickels = cents % 10
cents //= 10

dimes = cents % 25
cents //= 25

quarters = cents

print(quarters)
print(dimes)
print(nickels)
print(pennies)
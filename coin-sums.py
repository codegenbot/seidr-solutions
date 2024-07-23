n = int(input())
quarters = n // 25
dimes = (n % 25) // 10
nickels = ((n % 25) % 10) // 5
pennies = ((n % 25) % 10) % 5

print(quarters)
print(dimes)
print(nickels)
print(pennies)
cents = int(input())
quarters = cents // 25
cents %= 25
dimes = cents // 10
cents %= 10
nickels = cents // 5
cents %= 5
pennies = cents
pennies += nickels * 5 + dimes * 10 + quarters * 25
quarters += pennies // 25
pennies %= 25
dimes += pennies // 10
pennies %= 10
nickels += pennies // 5
pennies %= 5
print(quarters)
print(dimes)
print(nickels)
print(pennies)
```
cents = int(input("Enter the number of cents: "))
quarters = 0
dimes = 0
nickels = 0
pennies = 0

while cents > 0:
    if cents >= 25:
        quarters += 1
        cents -= 25
    elif cents >= 10:
        dimes += 1
        cents -= 10
    elif cents >= 5:
        nickels += 1
        cents -= 5
    else:
        pennies += 1
        cents -= 1

print(f"Quarters: {quarters}, Dimes: {dimes}, Nickels: {nickels}, Pennies: {pennies}")
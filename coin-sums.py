cents = int(input("Enter the number of cents: "))
quarters = 0
while cents >= 25:
    quarters += 1
    cents -= 25

dimes = 0
while cents >= 10:
    dimes += 1
    cents -= 10

nickels = 0
while cents >= 5:
    nickels += 1
    cents -= 5

pennies = cents

print(f"Pennies: {pennies}, Nickels: {nickels}, Dimes: {dimes}, Quarters: {quarters}")
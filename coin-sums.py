cents = int(input("Enter the number of cents: "))
quarters = cents // 25
cents %= 25

dime_count = cents // 10
cents %= 10

nickels = cents // 5
cents %= 5

pennies = cents

print(f"Quarters: {quarters}, Dimes: {dime_count}, Nickels: {nickels}, Pennies: {pennies}")
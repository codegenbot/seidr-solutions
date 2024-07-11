cents = int(input("Enter the amount in cents: "))
remaining_cents = cents

quarters = remaining_cents // 25
remaining_cents %= 25

dimes = remaining_cents // 10
remaining_cents %= 10

nickels = remaining_cents // 5
remaining_cents %= 5

pennies = remaining_cents

print(f"Quarters: {quarters}, Dimes: {dimes}, Nickels: {nickels}, Pennies: {pennies}")
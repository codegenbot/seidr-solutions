```Python
cents = int(input("Enter the number of cents: "))

quarters = cents // 25
remaining_cents = cents % 25

dimes = remaining_cents // 10
remaining_cents %= 10

nickles = remaining_cents // 5
pennies = remaining_cents % 5

print(f"{quarters} quarters\n{dimes} dimes\n{nickles} nickles\n{pennies} pennies")
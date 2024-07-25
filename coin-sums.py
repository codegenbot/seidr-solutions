```
quarters = cents // 25
dimes = (cents % 25) // 10
nickles = ((cents % 25) % 10) // 5
pennies = (cents % 25) % 10

print(f"{quarters} quarters\n{dimes} dimes\n{nickles} nickels\n{pennies} pennies")
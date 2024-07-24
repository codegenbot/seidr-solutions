cents = int(input("Enter the amount in cents: "))
quarters = cents // 25
dimes = (cents % 25) // 10
nickels = (cents % 10) // 5
pennies = cents % 5

print(
    "{}. quarters, {} dimes, {} nickels, {} pennies".format(
        quarters,
        dimes,
        nickels,
        pennies,
    )
)
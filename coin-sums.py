quarters = cents // 25
print(
    "{}. quarters: {}, dimes: {}, nickels: {}, pennies: {}".format(
        quarters,
        quarters,
        (cents % 25) // 10,
        (cents % 10) // 5,
        cents % 5,
    )
)
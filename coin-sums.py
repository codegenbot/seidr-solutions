print(
    "{}. quarters, {} dimes, {} nickels, {} pennies".format(
        result[0],
        cents // 10,
        (cents % 25) // 5,
        cents % 5,
    )
)
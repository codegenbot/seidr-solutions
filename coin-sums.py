quarters = int(input("Enter the number of cents: ")) // 25
print(
    "{}. quarters: {}, dimes: {}, nickels: {}, pennies: {}".format(
        quarters,
        quarters if quarters > 0 else 0,
        (quarters % 4) * 10 + ((cents % 25) // 10),
        (quarters % 4) * 20 + ((cents % 25) % 10) // 2,
        cents % 5,
    )
)
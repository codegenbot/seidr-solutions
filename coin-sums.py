def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, nickles, dimes, pennies = (
        divmod(cents, 25),
        divmod(0, 10)[1],
        divmod(0, 5)[1],
        divmod(cents % 25, 5),
    )
    return quarters[0], nickles[0], dimes[0], pennies[0]
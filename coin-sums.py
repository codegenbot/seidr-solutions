def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, cents = divmod(cents, 25)
    nickels, cents = divmod(cents, 5)
    dimes, cents = divmod(cents, 2)
    pennies = cents
    return quarters, nickels // 2, dimes // 10, pennies
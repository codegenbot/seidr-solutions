def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remaining = cents % 25
    nickels = remaining // 5
    remaining %= 5
    dimes = remaining // 10
    pennies = remaining % 10
    return quarters, nickels, dimes, pennies
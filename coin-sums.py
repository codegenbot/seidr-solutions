def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remainder = cents % 25
    nickels = remainder // 10
    remainder = remainder % 10
    dimes = remainder // 5
    pennies = remainder % 5
    return quarters, nickels, dimes, pennies
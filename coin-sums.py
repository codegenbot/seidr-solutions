Here is the solution:

def coin_sums(cents):
    quarters = cents // 25
    remainder = cents % 25
    nickels = remainder // 5
    remainder = remainder % 5
    dimes = remainder // 10
    pennies = remainder % 10
    return quarters, nickels, dimes, pennies
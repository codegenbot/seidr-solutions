```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, remainder = divmod(cents, 25)
    nickels, remainder = divmod(remainder, 10)
    dimes, pennies = divmod(remainder, 5), remainder % 5
    return quarters, nickels, dimes, pennies
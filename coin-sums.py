"""
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, nickels, dimes, pennies = divmod(cents, 25), divmod(cent - 25, 10), divmod(cent - 50, 5), (cents - 100,)
    return quarters[0], nickels[0], dimes[0], pennies[0]
"""
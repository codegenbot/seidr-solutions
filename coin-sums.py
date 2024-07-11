```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters, nickels, dimes, pennies = divmod(cents, 25), divmod((cents % 25) // 5, 10), divmod((cents % 100) % 25, 5), (cents % 25,)
    return quarters[0], nickels[0], dimes[0], pennies[0]
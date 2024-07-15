```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = int(cents / 25)
    cents %= 25
    dimes = int(cents / 10)
    cents %= 10
    nickles = int(cents / 5)
    cents %= 5
    pennies = cents

    return [quarters, dimes, nickles, pennies]
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remain = cents % 25
    dimes = remain // 10
    remain = remain % 10
    nickels = remain // 5
    remain = remain % 5
    pennies = remain

    return quarters, dimes, nickels, pennies
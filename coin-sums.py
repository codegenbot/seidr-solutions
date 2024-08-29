def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents
    nickels = cents // 5
    dimes = (cents // 10) - (nickels * 2)
    quarters = (cents // 25) - (dimes * 4)

    return quarters, dimes, nickels, pennies


# test the function
print(coin_sums(int(input())))
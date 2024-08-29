def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies = cents // 1
    nickels = (cents // 5) - (pennies * (cents % 5 != 0))
    dimes = (cents // 10) - (nickels * (cents % 10 != 0) + pennies * (cents % 5 == 0))
    quarters = cents // 25
    return quarters, nickels, dimes, pennies


c = int(input())
print(*coin_sums(c))
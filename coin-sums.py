def coin_sums(cents):
    coins = [25, 10, 5, 1]
    qtrs = cents // 25
    remain = cents % 25
    nickels = remain // 5
    remain %= 5
    dimes = remain // 10
    remain %= 10
    pennies = remain
    return qtrs, nickels, dimes, pennies


cents = int(input())
qtrs, nickels, dimes, pennies = coin_sums(cents)
print(qtrs)
print(nickels)
print(dimes)
print(pennies)
def coin_sums(cents):
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents

    return quarters, dimes, nickles, pennies

cents = int(input())
print(*coin_sums(cents), sep=' ')
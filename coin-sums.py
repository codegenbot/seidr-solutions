```
def coin_sums(cents):
    quarters = cents // 25
    cents %= 25
    nickles = cents // 10
    cents %= 10
    dimes = cents // 5
    pennies = cents % 5
    return quarters, nickles, dimes, pennies

c = int(input())
print(*coin_sums(c))
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    qtrs = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents
    return qtrs, dimes, nickles, pennies

c = int(input())
q, d, n, p = coin_sums(c)
print(q)
print(d)
print(n)
print(p)
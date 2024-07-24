```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    count = [0, 0, 0, 0]

    quarters = cents // 25
    cents %= 25
    count[0] = quarters

    nickles = cents // 5
    cents %= 5
    count[2] = nickles

    dimes = cents // 10
    cents %= 10
    count[1] = dimes

    pennies = cents
    count[3] = pennies

    return tuple(count)

cents = int(input())
print(*coin_sums(cents))
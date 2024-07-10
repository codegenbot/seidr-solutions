def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remaining_cents = cents % 25
    nickles = remaining_cents // 10
    remaining_cents %= 10
    dimes = remaining_cents // 5
    pennies = remaining_cents % 5
    return quarters, nickles, dimes, pennies


print(*coin_sums())
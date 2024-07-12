```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quartiers = cents // 25
    remaining_cents = cents % 25
    nickles = remaining_cents // 5
    remaining_cents %= 5
    dimes = remaining_cents // 10
    remaining_cents %= 10
    pennies = remaining_cents // 1

    return quartiers, nickles, dimes, pennies

cents = int(input())
quartiers, nickles, dimes, pennies = coin_sums(cents)

print(quartiers)
print(nickles)
print(dimes)
print(pennies)
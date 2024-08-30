```
def coin_sums():
    cents = int(input())
    quarters = cents // 25
    remaining_cents = cents % 25
    dimes = remaining_cents // 10
    remaining_cents %= 10
    nickles = remaining_cents // 5
    remaining_cents %= 5
    pennies = remaining_cents

    print(quarters)
    print(nickles)
    print(dimes)
    print(pennies)


coin_sums()
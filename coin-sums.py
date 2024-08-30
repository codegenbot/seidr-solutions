```
def coin_sums():
    cents = int(input())
    quarters = cents // 25
    remaining_cents = cents % 25
    nickles = remaining_cents // 5
    dimes = (remaining_cents % 5) // 10
    pennies = remaining_cents % 10

    print(quarters)
    print(nickles)
    print(dimes)
    print(pennies)


coin_sums()
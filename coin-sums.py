```
def coin_sums():
    num_cents = int(input())
    quarters = num_cents // 25
    remaining_cents = num_cents % 25
    dimes = remaining_cents // 10
    remaining_cents %= 10
    nickles = remaining_cents // 5
    remaining_cents %= 5
    pennies = remaining_cents

    print(quarters)
    print(dimes)
    print(nickles)
    print(pennies)


coin_sums()
def coin_sums():
    num_cents = int(input())
    pennies = num_cents // 1
    remaining_cents = num_cents % 1
    nickles = remaining_cents // 5
    remaining_cents %= 5
    dimes = remaining_cents // 10
    remaining_cents %= 10
    quarters = remaining_cents // 25

    print(quarters)
    print(nickles)
    print(dimes)
    print(pennies)


coin_sums()
def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    remaining_cents = cents % 25
    dimes = remaining_cents // 10
    remaining_cents %= 10
    nickles = remaining_cents // 5
    pennies = remaining_cents % 5
    print(quarters)
    print(dimes)
    print(nickles)
    print(pennies)


coin_sums()
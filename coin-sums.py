def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies

    quarter_count = cents // 25
    remaining_cents = cents % 25

    dime_count = remaining_cents // 10
    remaining_cents %= 10

    nickel_count = remaining_cents // 5
    remaining_cents %= 5

    penny_count = remaining_cents

    return [quarter_count, dime_count, nickel_count, penny_count]


print(*coin_sums(), sep="\n")
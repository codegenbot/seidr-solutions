def coin_sums(cents):
    coins = [25, 10, 5, 1]
    counts = [0, 0, 0, 0]

    quarters = cents // 25
    remaining_cents = cents % 25
    counts[3] = quarters

    while remaining_cents >= 10:
        counts[2] += 1
        remaining_cents -= 10
    while remaining_cents >= 5:
        counts[1] += 1
        remaining_cents -= 5
    while remaining_cents > 0:
        counts[0] += 1
        remaining_cents -= 1

    return counts[3], counts[2], counts[1], counts[0]
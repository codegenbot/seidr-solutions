def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []

    for i in range((cents // 25) + 1):
        remaining_cents = cents - (i * 25)
        if remaining_cents % 10 == 0:
            quarter_count = i
            dime_count = 0
            nickel_count = 0
            penny_count = int(remaining_cents / 1)
            results.append([quarter_count, dime_count, nickel_count, penny_count])
            break
        else:
            for j in range((remaining_cents // 10) + 1):
                remaining_cents -= j * 10
                if remaining_cents % 5 == 0:
                    quarter_count = i
                    dime_count = j
                    nickel_count = int(remaining_cents / 5)
                    penny_count = 0
                    results.append(
                        [quarter_count, dime_count, nickel_count, penny_count]
                    )
                    break
                else:
                    for k in range((remaining_cents // 1) + 1):
                        if remaining_cents % 1 == 0:
                            quarter_count = i
                            dime_count = j
                            nickel_count = int(remaining_cents / 5)
                            penny_count = k
                            results.append(
                                [quarter_count, dime_count, nickel_count, penny_count]
                            )
                            break

    return results[0]


cents = int(input())
print(*coin_sums(cents))
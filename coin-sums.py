def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = []
    for i in range(cents // 25 + 1):
        remaining_cents = cents - i * 25
        if remaining_cents % 10 == 0:
            quarter_count = i
            dime_count = remaining_cents // 10
            nickle_count = 0
            penny_count = 0
            results.append([quarter_count, dime_count, nickle_count, penny_count])
    return min(results, key=lambda x: (x[0] + x[1] + x[2] + x[3]))


cents = int(input())
print(*coin_sums(cents))
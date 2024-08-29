def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(int(cents / 25) + 1):
        remaining_cents = cents - i * 25
        quarter_count = i
        if remaining_cents >= 10:
            dime_count = int(remaining_cents / 10)
            remaining_cents %= 10
        else:
            dime_count = 0
        if remaining_cents >= 5:
            nickel_count = int(remaining_cents / 5)
            remaining_cents %= 5
        else:
            nickel_count = 0
        penny_count = remaining_cents
        results.append([quarter_count, dime_count, nickel_count, penny_count])
    return min(results, key=lambda x: (x[0] + x[1] + x[2] + x[3]))


c = int(input())
print(*coin_sums(c))
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = []
    for i in range(cents // 25 + 2):  # quarters
        remaining_cents = cents - i * 25
        results.append([i, remaining_cents // 10, remaining_cents % 10])
    return [r[0], r[1], r[2]] if any(r) else [0, 1, 0]


cents = int(input())
print(*coin_sums(cents))
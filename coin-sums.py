```
def coin_sums(cents):
    if cents > 99: 
        return [0, 0, 0, 0]
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    results = []
    for i in range(cents // 25 + 1):
        remaining_cents = cents - i * 25
        if remaining_cents % 10 == 0:
            quarter_count = i
            dime_count = remaining_cents // 10
            nickle_count = (remaining_cents % 10) // 5
            penny_count = (remaining_cents % 5)
            results.append([quarter_count, dime_count, nickle_count, penny_count])
    if not results:
        return [0, 0, 0, 0]
    return min(results, key=lambda x: sum(x))


cents = int(input())
print(*coin_sums(cents))
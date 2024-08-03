def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for i in range((cents // 25) + 1):
        remaining_cents = cents - (i * 25)
        quarters = i
        nickels = remaining_cents // 5
        dimes = (remaining_cents % 5) // 10
        pennies = remaining_cents % 10

        results.append([quarters, nickels, dimes, pennies])

    return min(results, key=sum)


cents = int(input())
print(*coin_sums(cents))
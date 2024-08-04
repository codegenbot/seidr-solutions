def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for i in range(10000):  # quarters
        if cents < 25:
            break

        quarters = cents // 25
        cents %= 25

        dimes = cents // 10
        cents %= 10

        nickles = cents // 5
        cents %= 5

        pennies = cents
        results.append([quarters, dimes, nickles, pennies])

    return results[0]


c = int(input())
print(*coin_sums(c))
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []
    for c in coins:
        results.append(cents // c)
        cents %= c
    return results


cents = int(input())
print(*coin_sums(cents))
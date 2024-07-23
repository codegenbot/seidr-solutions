def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = []
    for coin in coins:
        results.append(cents // coin)
        cents %= coin
    return results


cents = int(input())
print(*coin_sums(cents))
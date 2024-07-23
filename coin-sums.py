def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    result = []

    for coin in coins:
        count = cents // coin
        cents %= coin
        result.append(count)

    return result


cents = int(input())
print(*coin_sums(cents))
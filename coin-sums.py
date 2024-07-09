def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = int(cents / coins[i])
        cents %= coins[i]
        results[i] = count

    return tuple(results)


cents = int(input())
print(*coin_sums(cents))
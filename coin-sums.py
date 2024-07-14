def coin_sums(cents):
    coins = [25, 10, 5, 1]  # values of quarters, dimes, nickels, pennies in cents
    results = [0, 0, 0, 0]
    for i, c in enumerate(coins):
        while c <= cents:
            cents -= c
            results[i] += 1
    return results


cents = int(input())
print(*coin_sums(cents))
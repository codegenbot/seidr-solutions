```
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = min(cents // coins[i], result[3] if i > 2 else float('inf'))
            result[i] += count
            cents -= coins[i] * count

    return result


cents = int(input())
print(*coin_sums(cents))
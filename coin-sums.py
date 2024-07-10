def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = min((cents + coins[i] - 1) // coins[i], len(str(cents)) * 4)
            cents -= count * coins[i]
            results[i] += count

    return results


cents = int(input())
print(*coin_sums(cents))
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            results.extend([count] + [0] * len(coins))
            break
        else:
            results.append(0)
    remaining_cents = cents - sum(
        [c * coins[i] for i, c in enumerate(results) if c > 0]
    )
    for i in range(len(coins)):
        count = remaining_cents // coins[i]
        if count > 0:
            results.extend([count] + [0] * len(coins))
            break
    return results


c = int(input())
print(*coin_sums(c), sep="\n")
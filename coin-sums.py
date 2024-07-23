def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    result = []

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            result.append(f"{count} quarter{'s' if count > 1 else ''}\n")
            cents %= coins[i]

    return ''.join(result).strip()

cents = int(input())
print(coin_sums(cents))
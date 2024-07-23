def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    result = []

    while cents > 0:
        for coin in sorted(coins, reverse=True):
            count = cents // coin
            if count > 0:
                result.append(count)
                cents %= coin
                break

    return ' '.join(map(str, result))


cents = int(input())
print(coin_sums(cents))
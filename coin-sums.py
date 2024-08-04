def coin_sums(cents):
    coins = [25, 10, 5, 1]  # Quarters, Dimes, Nickles, Pennies
    result = []

    for coin in coins:
        count = int(cents // coin)
        cents %= coin
        result.append(count)

    return tuple(result)


c = int(input())
print(*coin_sums(c))
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    output = []

    for coin in reversed(coins):
        output.append(cents // coin)
        cents %= coin

    return tuple(output)


cents = int(input())
print(*coin_sums(cents))
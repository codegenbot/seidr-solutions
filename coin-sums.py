def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return [cents // coin for coin in coins] + [
        cents % coin == 0 for _ in range(4)
    ].index(False)


print(*coin_sums(int(input())))
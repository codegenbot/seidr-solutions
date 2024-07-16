def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return [cents // coin for coin in coins] + [cents % coin == 0 for _ in coins][::-1]


c = int(input())
print(*coin_sums(c))
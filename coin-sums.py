def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return [cents // coin for coin in coins]


input_cents = int(input())
print(*coin_sums(input_cents))
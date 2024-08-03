def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    return [cents // coin for coin in coins][::-1]


c = int(input())
print(*coin_sums(c))
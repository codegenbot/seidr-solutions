```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    return [(cents // coin) for coin in coins] + [(cents % c == 0).index(True) if cents % c == 0 else len(coins) for c in coins][::-1]


c = int(input())
print(*coin_sums(c))
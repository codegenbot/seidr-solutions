```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]
    i = len(coins) - 1
    while cents > 0:
        if cents >= coins[i]:
            count = min(cents // coins[i], res[i] + (cents % coins[i] == 0))
            cents -= coins[i] * count
            res[i] += count
        i -= 1
    return tuple(res)

c = int(input())
print(*coin_sums(c))
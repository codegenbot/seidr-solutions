```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = cents // coins[i]
            cents -= coins[i] * count
            result[i] += count

    return ['{:03}'.format(i) for i in result]


cents = int(input())
print(*coin_sums(cents))
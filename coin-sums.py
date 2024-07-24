def coin_sums(cents):
    coins = [25, 10, 5, 1]
    count = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count[i] += cents // coins[i]
            cents %= coins[i]

    return tuple(str(x) + ' ' for x in count)

cents = int(input())
print(*coin_sums(cents))
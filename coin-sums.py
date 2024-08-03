def coin_sums(cents):
    coins = [25, 10, 5, 1]
    outputs = []
    for i in range(len(coins)):
        count = int(cents // coins[i])
        cents %= coins[i]
        outputs.append(count)
    return tuple(outputs)


cents = int(input())
print(*coin_sums(cents))
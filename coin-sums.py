def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    res = []
    for c in coins:
        count = int(cents // c)
        res.append(count)
        cents %= c
    return tuple(res)


print(*coin_sums(), sep="\n")
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for c in coins:
        count = cents // c
        if count > 0:
            result.append(count)
            cents %= c
    return tuple(result + [cents])


c = int(input())
print(*coin_sums(c))
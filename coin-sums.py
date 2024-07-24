def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(4):
        count = cents // coins[i]
        if count > 0:
            result[i] += count
            cents -= count * coins[i]

    return result


cents = int(input())
print(*[str(x) for x in coin_sums(cents)])
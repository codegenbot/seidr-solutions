def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i, coin in enumerate(sorted(coins, reverse=True)):
        count = cents // coin
        if count > 0:
            result[i] += count
            cents -= count * coin

    return result


cents = int(input())
print(*coin_sums(cents))
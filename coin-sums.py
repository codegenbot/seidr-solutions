def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in reversed(coins):
        while cents >= coin:
            cents -= coin
            result.append(coin)
    pennies = cents // 1
    cents %= 1
    return len(result), pennies, 0, 0


cents = int(input())
print(*coin_sums(cents))
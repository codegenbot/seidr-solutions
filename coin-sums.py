def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]
    i = len(coins) - 1
    while cents > 0:
        if cents >= coins[i]:
            count = cents // coins[i]
            cents %= coins[i]
            result[i] = count
        i -= 1
    return result


cents = int(input())
print(*coin_sums(cents))
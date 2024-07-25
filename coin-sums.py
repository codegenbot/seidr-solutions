def coin_sums(cents):
    coins = [1, 5, 10, 25]
    result = [0, 0, 0, 0]  # Initialize counts for each coin type
    i = 0
    while cents > 0:
        count = cents // coins[i]
        if count > 0:
            result[i] = count
            cents %= coins[i]
        else:
            i += 1
    return tuple(result)

cents = int(input())
print(*coin_sums(cents))
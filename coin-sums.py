def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]  # calculate the maximum number of coins that can be used
        cents %= coins[i]          # update the remaining cents after using those coins
        result[i] = count

    return result


cents = int(input())
print(*coin_sums(cents))
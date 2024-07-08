def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        count = cents // coin
        result[i] = count
        cents %= coin

    return result

cents = int(input())
print(*coin_sums(cents), sep='\n')
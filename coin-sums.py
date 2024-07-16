def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in sorted(coins, reverse=True):
        quotient = cents // coin
        cents -= quotient * coin
        result[coins.index(coin)] = quotient

    return result


cents = int(input())
print('\n'.join(map(str, coin_sums(cents))))
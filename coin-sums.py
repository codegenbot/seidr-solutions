def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(3, -1, -1):
        quotient = cents // coins[i]
        cents %= coins[i]
        result[i] += quotient

    return result


print('\n'.join(map(str, coin_sums(int(input())))))
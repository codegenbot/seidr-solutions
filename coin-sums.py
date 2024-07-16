def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            quotient = cents // coins[i]
            cents -= quotient * coins[i]
            result[i] += quotient

    return result


cents = int(input())
print(*coin_sums(cents))
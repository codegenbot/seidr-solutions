```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    i = 0
    while cents > 0 and i < len(coins):
        quotient = cents // coins[i]
        cents -= quotient * coins[i]
        result[i] += quotient
        i += 1

    return result


cents = int(input())
print(*coin_sums(cents))
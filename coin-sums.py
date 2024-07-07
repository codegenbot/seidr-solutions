def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    quotients = [cents // coin for coin in coins]
    remainders = [cents % coin for coin in coins]
    for i, (coin, quotient) in enumerate(zip(coins, quotients)):
        result[i] += quotient
        cents = remainders[i]

    while cents > 0:
        if cents >= 25:
            result[0] += 1
            cents -= 25
        elif cents >= 10:
            result[1] += 1
            cents -= 10
        elif cents >= 5:
            result[2] += 1
            cents -= 5
        else:
            result[3] += 1
            cents -= 1

    return result


cents = int(input())
print(*coin_sums(cents))
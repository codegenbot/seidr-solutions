def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        quotient = cents // coins[i] if cents >= coins[i] else 0
        remainder = cents % coins[i]
        result[i] += quotient
        cents = remainder

    return result
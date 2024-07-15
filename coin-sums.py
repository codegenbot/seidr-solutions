```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            quotient = int(cents / coins[i])
            result[i] += quotient
            cents -= coins[i] * quotient

    return result[3], result[2], result[1], result[0]
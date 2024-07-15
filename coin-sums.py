```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    while cents > 0:
        for i in range(len(coins)):
            if cents >= coins[i]:
                quotient = int(cents / coins[i])
                result[i] += quotient
                cents -= coins[i] * quotient

    return result
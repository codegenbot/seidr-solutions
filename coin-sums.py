```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        quotient = int(cents / coins[i])
        cents %= coins[i]
        if cents >= coins[i]:
            break
        result[i] = quotient

    while cents > 0:
        if cents >= 1:
            result[3] += 1
            cents -= 1
        elif cents >= 5:
            result[2] += int(cents / 5)
            cents %= 5
        elif cents >= 10:
            result[1] += int(cents / 10)
            cents %= 10
        else:
            result[0] += cents
            break

    return result
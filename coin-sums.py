def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    while cents > 0:
        if cents >= 25:
            cents -= 25
            result[0] += 1
        elif cents >= 10:
            cents -= 10
            result[1] += 1
        elif cents >= 5:
            cents -= 5
            result[2] += 1
        else:
            cents -= 1
            result[3] += 1

    return tuple(result)


cents = int(input())
print(*coin_sums(cents))
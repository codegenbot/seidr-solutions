def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []

    for coin in coins:
        count = 0
        while cents >= coin:
            cents -= coin
            count += 1
        result.append(str(count))

    return ['{:03}'.format(i) for i in result]


cents = int(input())
print(*coin_sums(cents))
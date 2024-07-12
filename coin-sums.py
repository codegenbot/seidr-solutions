def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins:
        count = 0
        while cents >= coin:
            count += 1
            cents -= coin
        if count > 0:
            result.append(count)
    return tuple(result)

cents = int(input())
print(*coin_sums(cents))
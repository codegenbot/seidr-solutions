def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = []

    for coin in coins:
        if cents >= coin:
            count = math.floor(cents / coin)
            cents %= coin
            result.append(count)
        else:
            result.append(0)

    return result


print(*coin_sums())
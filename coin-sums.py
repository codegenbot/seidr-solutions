def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coins.sort(reverse=True)

    result = []
    for coin in coins:
        count = int(cents / coin)
        cents %= coin
        if count > 0:
            result.append(count)

    return len(result), *result


cents = int(input())
print(*coin_sums(cents))
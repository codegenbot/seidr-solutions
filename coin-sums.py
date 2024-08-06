def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins:
        if cents >= coin:
            count = cents // coin
            result.append(count)
            cents %= coin
        else:
            result.append(0)
    return " ".join(map(str, result))
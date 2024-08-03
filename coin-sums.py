def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            result.append(count)
            cents %= coin

    return str(result[0]) + "\n" + " ".join(map(str, result[1:]))
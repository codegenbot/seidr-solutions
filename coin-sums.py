def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  
    result = []

    for coin in coins:
        count = cents // coin
        result.append(count)
        cents %= coin

    return result


print(*coin_sums(), sep="\n")
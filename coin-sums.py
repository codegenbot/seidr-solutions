def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    output = []

    for coin in coins:
        output.append(cents // coin)
        cents %= coin

    return output
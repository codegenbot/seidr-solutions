def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for coin in coins:
        result[coins.index(coin)] += cents // coin
        cents %= coin

    return result

cents = int(input("Enter the number of cents: "))
print(coin_sums(cents))
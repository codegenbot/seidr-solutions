```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        if coin <= cents:
            results.append(cents // coin)
            cents %= coin
        else:
            results.append(0)

    return results

cents = int(input("Enter the amount of cents: "))
result = coin_sums(cents)
print(result[0])
print(result[1])
print(result[2])
print(result[3])
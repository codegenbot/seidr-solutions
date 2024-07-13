```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in sorted([25, 10, 5, 1], reverse=True):
        count = cents // coin
        if count > 0:
            result.append(count)
            cents %= coin
    return result

cents = int(input("Enter the number of cents: "))
print(coin_sums(cents))
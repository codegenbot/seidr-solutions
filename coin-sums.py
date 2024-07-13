```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            if coin == 25: name = 'quarter'
            elif coin == 10: name = 'dime'
            elif coin == 5: name = 'nickle'
            else: name = 'penny'
            result.append((count, name))
            cents %= coin
    return ['{} {}'.format(count, name if count == 1 else f"{count} {name}s") for count, name in result]

cents = int(input("Enter the number of cents: "))
print(coin_sums(cents))
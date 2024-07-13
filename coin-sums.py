```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            result.append((count, 'quarter' if coin == 25 else 'dime' if coin == 10 else 'nickle' if coin == 5 else 'penny'))
            cents %= coin
    return ['{} {}'.format(count, name) for count, name in result]

cents = int(input("Enter the number of cents: "))
print(coin_sums(cents))
```Python
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            result.append(count)
            cents %= coin
    return ['quarter' if c == 25 else 'dime' if c == 10 else 'nickle' if c == 5 else 'penny' for c in result]

cents = int(input("Enter the number of cents: "))
print(coin_sums(cents))
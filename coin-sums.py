```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            result.append((coin // 25) * 'quarter' + (coin % 25 // 5) * 'nickle' + (coin % 5 // 1) * 'dime' + (coin % 1) * 'penny')
            cents %= coin
    return result

cents = int(input("Enter the number of cents: "))
print(coin_sums(cents))
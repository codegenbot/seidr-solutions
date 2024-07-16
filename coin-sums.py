```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        count = cents // coin
        counts = count
        while count > 0 and coin == 25:
            cents -= coin * counts
            count = cents // 25
        if count > 0:
            results.append(count)
        cents %= coin

    return len(results), *results

cents = int(input())
num_coins, *counts = coin_sums(cents)
print(num_coins)
for count in counts:
    print(count)
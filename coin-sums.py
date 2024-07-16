```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            while count > 0 and coin == 25:
                counts = count
                cents -= coin * counts
                count = cents // 25
            results.append(counts)
            counts = cents % coin
            cents = 0
        else:
            results.append(0)

    return len(results), *results

cents = int(input())
num_coins, *counts = coin_sums(cents)
print(num_coins)
for count in counts:
    print(count)
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            counts = [count] * (coin // coin)
            cents %= coin
            results.append(counts)

    return len(results), *([item for sublist in results for item in sublist])
cents = int(input())
num_coins, *counts = coin_sums(cents)
print(num_coins)
for count in counts:
    print(count)
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in coins:
        count = cents // coin
        if count > 0:
            counts = [count] * (coin // coins[0])
            cents %= coin; counts.append(cents // coin)
            results.extend(counts)

    return len(results), *results

cents = int(input())
num_coins, *counts = coin_sums(cents)
print(num_coins)
for count in counts:
    print(count)
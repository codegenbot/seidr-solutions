```
```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []
    for coin in coins:
        result = cents // coin
        if result > 0:
            results.append((coin, result))
            cents %= coin
    return results

cents = int(input())
results = coin_sums(cents)
for name, count in [('quarters', 25), ('dimes', 10), ('nickels', 5), ('pennies', 1)]:
    for coin, amount in results:
        if coin == eval(name):
            print(f"{name}: {amount}")
            break
```
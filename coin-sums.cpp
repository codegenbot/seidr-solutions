```
def get_coin_sums(coins, total):
    counts = {1: 0, 5: 0, 10: 0, 25: 0}

    for coin in coins:
        if coin <= total:
            counts[coin] += 1

    return [counts[1], counts[5], counts[10], counts[25]]
```
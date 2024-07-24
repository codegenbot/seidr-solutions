```
def smallest_change(coins):
    coins.sort(reverse=True)
    total = sum(coins)
    count = 0
    while total > 0:
        for coin in coins:
            if total >= coin:
                total -= coin
                count += 1
                break
    return count
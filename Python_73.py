def smallest_change(coins):
    n = len(coins)
    coins = [str(x) for x in coins]
    coins = ''.join(coins)
    rev_coins = coins[::-1]
    diff_count = 0
    for i in range(n//2):
        if coins[i] != rev_coins[n-i-1]:
            diff_count += 1
    return diff_count
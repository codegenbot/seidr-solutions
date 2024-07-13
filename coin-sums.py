def coin_sums(cents):
    coins = [25, 10, 5, 1]
    dp = [float('inf')] * (cents + 1)
    dp[0] = 0

    for i in range(1, cents + 1):
        for coin in coins:
            if i >= coin:
                dp[i] = min(dp[i], dp[i - coin] + 1)

    return [i for i in reversed([coin for coin in coins]) while i <= cents and dp[cents] > dp[cents - i]]
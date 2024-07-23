def coin_sums(cents):
    coins = [25, 10, 5, 1]
    min_coins = float("inf")
    for i in range(10000):  # maximum number of quarters possible
        coins_used = 0
        curr_cents = cents
        for coin in reversed(coins):
            while curr_cents >= coin:
                curr_cents -= coin
                coins_used += 1
        if curr_cents == 0 and coins_used < min_coins:
            min_coins = coins_used
    return [
        min_coins // 25,
        (min_coins % 25) // 10,
        (min_coins % 10) // 5,
        min_coins % 5,
    ]
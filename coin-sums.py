def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]  # quarters, dimes, nickles, pennies
    result = []

    for coin in coins:
        while cents >= coin:
            cents -= coin
            result.append(coin // 100)

    return str(result[0]) if len(result) > 0 else "0\n0\n0\n0"
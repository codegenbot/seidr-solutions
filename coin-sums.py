def get_coin_counts(cents):
    coins = [1, 5, 10, 25]
    counts = {1: 0, 5: 0, 10: 0, 25: 0}
    while cents > 0:
        for coin in coins:
            if cents >= coin:
                cents -= coin
                counts[coin] += 1
    return counts
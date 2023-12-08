def get_coin_sums(cents):
    coins = [1, 5, 10, 25]
    counts = [0, 0, 0, 0]
    for coin in coins:
        quotient, remainder = divmod(cents, coin)
        counts[coin] += quotient
        cents = remainder
    return counts[1], counts[5], counts[10], counts[25]
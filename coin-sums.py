def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = [0, 0, 0, 0]

    for i, coin_value in enumerate(reversed(coins)):
        while cents >= coin_value:
            cents -= coin_value
            coin_counts[3-i] += 1

    return tuple(coin_counts)

cents = int(input())
print(*coin_sums(cents))
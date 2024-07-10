def coin_sums(cents):
    coins = [25, 10, 5, 1]  # values of quarters, dimes, nickels and pennies in cents
    res = []

    for coin in coins:
        while cents >= coin:
            cents -= coin
            res.append(coin)

    return len(res), res.count(25), res.count(10), res.count(5)


cents = int(input())
print(*coin_sums(cents))
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_counts = [0, 0, 0, 0]

    for coin in coins:
        while cents >= coin:
            cents -= coin
            coin_counts[coins.index(coin)] += 1

    return coin_counts[0], coin_counts[1], coin_counts[2], coin_counts[3]


cents = int(input())
pennies, nickles, dimes, quarters = coin_sums(cents)
print(pennies)
print(nickles)
print(dimes)
print(quarters)
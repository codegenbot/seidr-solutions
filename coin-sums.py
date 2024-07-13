def coin_sums(cents):
    coins = [25, 10, 5, 1]
    num_coins = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            num_coins[i] += 1

    return " ".join(map(str, num_coins))


# test cases
print(coin_sums(1))
print(coin_sums(2))
print(coin_sums(3))
print(coin_sums(4))
print(coin_sums(5))
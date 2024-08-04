def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1

    return tuple(results)


# test cases
print(coin_sums(1))
print(coin_sums(2))
print(coin_sums(3))
print(coin_sums(4))
print(coin_sums(5))
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    pennies_needed = cents
    result = [0, 0, 0, 0]

    for coin in reversed(coins):
        while pennies_needed >= coin:
            pennies_needed -= coin
            result[coins.index(coin)] += 1

    return result


cents = int(input())
print(*coin_sums(cents))